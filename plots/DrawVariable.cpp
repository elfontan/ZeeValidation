void DrawVariable(TString VAR,TString YEAR,TString CAT,bool LOG,int iSyst,int REBIN,float XMIN,float XMAX,TString XTITLE,bool isINT,int XNDIV,bool PRINT)
{
  gROOT->ForceStyle();  
  //gROOT->SetBatch(kTRUE); //kTRUE ---> histos are not showed while drawn. You can avoid crashes with this

  map<TString,float> lumis = {{"2016_preVFP",19.5}, {"2016_postVFP",16.8}, {"2017",41.5}, {"2018",59.8}};
  
  std::vector<TString> SAMPLE = {
    "Data_13TeV_UntaggedTag",
    "DYToLL_13TeV_UntaggedTag",
    //"DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftUp01sigma",
    //"DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityUp",
    "DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityDown",
    "DYToLL_13TeV_UntaggedTag_MvaShiftUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MvaShiftDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoDown01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoUp01sigma",
    "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoDown01sigma",
  };

  TFile *inf[(int)SAMPLE.size()];
  TH1F  *h[(int)SAMPLE.size()];

  TCanvas *can = new TCanvas("DataVsMC_"+VAR+"_"+YEAR+"_"+CAT,"DataVsMC_"+VAR+"_"+YEAR+"_"+CAT,800,700);
  can->SetSupportGL(true); //support transparency
  
  for(int i=0;i<(int)SAMPLE.size();i++) {
    inf[i] = TFile::Open("../histos_"+YEAR+"/makeHistos_output_"+SAMPLE.at(i)+"_"+YEAR+".root");
    if (CAT == "") h[i] = (TH1F*)inf[i]->Get(VAR);
    else h[i] = (TH1F*)inf[i]->Get(VAR+"_"+YEAR+"_"+CAT);
    if (!h[i]) {
      cout<<"Histogram does not exist !!!"<<endl;
      break;
    } 
    h[i]->SetDirectory(0);
    h[i]->Rebin(REBIN);
    h[i]->SetLineWidth(1);
    h[i]->SetLineColor(kBlack);
    inf[i]->Close();
  }
  
  h[0]->SetLineWidth(2);//data
  h[1]->SetFillColor(kAzure+1);//Zee
  
  cout<<"======== "<<VAR+"_"+YEAR+"_"+CAT<<" ====================="<<endl;
  cout<<"Data events:  "<<h[0]->Integral()<<endl;
  cout<<"Zee events:  "<<h[1]->Integral()<<endl;
  
  //compute uncertainty bands
  TH1F * uncBand_stat = (TH1F*)h[1]->Clone();
  TH1F * uncBand = (TH1F*)h[1]->Clone();
  TH1F * uncBandRatio_stat = (TH1F*)h[1]->Clone();
  TH1F * uncBandRatio = (TH1F*)h[1]->Clone();
  for (int ibin = 0; ibin < h[1]->GetSize()-2; ibin++){
    float binContentUp = pow(h[1]->GetBinError(ibin+1),2);
    float binContentDown = pow(h[1]->GetBinError(ibin+1),2);
    uncBand_stat->SetBinError(ibin+1, (sqrt(binContentUp) + sqrt(binContentDown))/2.);
    uncBandRatio_stat->SetBinContent(ibin+1, 1.);
    uncBandRatio_stat->SetBinError(ibin+1,((sqrt(binContentUp) + sqrt(binContentDown))/2.)/h[1]->GetBinContent(ibin+1)); 
    for (int ihisto = iSyst; ihisto < (int)SAMPLE.size(); ihisto++){
      if (h[1]->GetBinContent(ibin+1) <= h[ihisto]->GetBinContent(ibin+1)) binContentUp += pow((h[1]->GetBinContent(ibin+1)-h[ihisto]->GetBinContent(ibin+1)),2); //sum quads of differences between nominal MC and shifts
      else binContentDown += pow((h[1]->GetBinContent(ibin+1)-h[ihisto]->GetBinContent(ibin+1)),2);
    }
    binContentUp = sqrt(binContentUp);
    binContentDown = sqrt(binContentDown);
    float binContent = (binContentUp + binContentDown)/2.;
    uncBand->SetBinError(ibin+1, binContent);
    uncBandRatio->SetBinContent(ibin+1,1);
    uncBandRatio->SetBinError(ibin+1,binContent/h[1]->GetBinContent(ibin+1));
  }
  uncBand_stat->SetFillColorAlpha(kOrange+2, 0.80);
  uncBand->SetFillColorAlpha(kOrange+1, 0.80);
  uncBand_stat->SetMarkerSize(0);
  uncBand->SetMarkerSize(0);
  uncBand_stat->Scale(h[0]->Integral()/uncBand_stat->Integral());
  uncBand->Scale(h[0]->Integral()/uncBand->Integral());
  uncBandRatio_stat->SetFillColorAlpha(kOrange+2, 0.80);
  uncBandRatio_stat->SetMarkerSize(0);
  uncBandRatio->SetFillColorAlpha(kOrange+1, 0.80);
  uncBandRatio->SetMarkerSize(0);
  
  TH1F *hRatio = (TH1F*)h[0]->Clone("Ratio");
  hRatio->SetLineWidth(2);
  h[1]->Scale(h[0]->Integral()/h[1]->Integral());
  hRatio->Divide(h[1]);

  TLegend *leg = new TLegend(0.76,0.7,0.89,0.9);
  leg->SetFillColor(0);
  leg->SetTextFont(42);
  leg->SetTextSize(0.03);
  leg->AddEntry(h[0], "Data", "p");
  leg->AddEntry(h[1],"DY","F");
  leg->AddEntry(uncBand, "stat+syst", "F");
  
  can->SetBottomMargin(0.25);
  TH1F *hAux = (TH1F*)h[0]->Clone("aux");
  hAux->Reset();
  hAux->GetXaxis()->SetNdivisions(XNDIV);
  hAux->GetYaxis()->SetMaxDigits(4); //force scientific notation on y axis after 3 digit numbers
  if (isINT) {
    hAux->GetXaxis()->CenterLabels();
  }
  //properly set range so that uncertainty bands are always contained in canvas
  float m = 0.;
  for (int i = 0; i < uncBand->GetSize()-2; i++) {
    float mym = uncBand->GetBinContent(i+1) + uncBand->GetBinError(i+1);
    if (mym > m) m = mym;
  }
  hAux->GetYaxis()->SetRangeUser(0.5,1.1*m);
  if (LOG) {
    gPad->SetLogy(); 
    hAux->GetYaxis()->SetRangeUser(0.5,2*m);
  }
  hAux->GetXaxis()->SetRangeUser(XMIN,XMAX);
  //compute bin width
  int nbins = h[1]->GetSize()-2;
  int xmin = h[1]->GetBinLowEdge(1); int xmax = h[1]->GetBinLowEdge(nbins+1);
  float binwidth = (xmax - xmin)/(float(nbins));
  hAux->GetYaxis()->SetTitle(TString::Format("Events / %1.1f GeV",binwidth));
  hAux->GetXaxis()->SetTitle("");
  hAux->GetXaxis()->SetLabelSize(0.0);
  hAux->Draw();

  h[1]->Draw("hist same");
  uncBand_stat->Draw("same E2");
  uncBand->Draw("same E2");
  h[0]->Draw("sames E");
  
  leg->Draw();
  gPad->RedrawAxis();

  TPad *pad = new TPad("pad","pad",0.,0.,1.,1.);
  pad->SetTopMargin(0.77);
  pad->SetFillColor(0);
  pad->SetFillStyle(0);
  pad->Draw();
  pad->cd(0);
  pad->SetGridy();
  hRatio->GetXaxis()->SetTitleOffset(0.95);
  hRatio->GetYaxis()->SetTitleOffset(1.5);
  hRatio->GetYaxis()->SetTickLength(0.06);
  hRatio->GetYaxis()->SetTitleSize(0.03);
  hRatio->GetYaxis()->SetLabelSize(0.04);
  hRatio->GetYaxis()->SetTitle("Data/MC");
  hRatio->GetXaxis()->SetTitle(XTITLE);
  hRatio->GetXaxis()->SetRangeUser(XMIN,XMAX);
  //properly set range so that uncertainty bands are always contained in canvas
  float mm = 0.;
  for (int i = 0; i < uncBand->GetSize()-2; i++) {
    float mym = uncBandRatio->GetBinContent(i+1) + uncBandRatio->GetBinError(i+1);
    if (mym > mm) mm = mym;
  }
  if (abs(mm-1)>0.4) mm = 0.4;
  hRatio->GetYaxis()->SetRangeUser(1-1.25*abs(1-mm),1+1.25*abs(1-mm));
  hRatio->GetYaxis()->SetNdivisions(505);
  hRatio->GetXaxis()->SetNdivisions(XNDIV);
  hRatio->GetYaxis()->SetLabelSize(0.03);
  if (isINT) {
    hRatio->GetXaxis()->CenterLabels();
  }
  hRatio->Draw("same");
  uncBandRatio_stat->Draw("same E2");
  uncBandRatio->Draw("same E2");
  hRatio->Draw("same");
  
  TLatex CMS;
  CMS.SetTextFont(61);
  CMS.SetTextSize(0.05);
  CMS.DrawLatexNDC(0.20,0.87,"CMS");
  CMS.SetTextFont(52);
  CMS.DrawLatexNDC(0.31,0.87,"Preliminary");
  TString year;
  if (YEAR.Index("pre") != -1) year = "2016_preVFP";
  else if (YEAR.Index("post") != -1) year = "2016_postVFP";
  else if (YEAR.Index("2017") != -1) year = "2017";
  else if (YEAR.Index("2018") != -1) year = "2018";
  else year = "XXX";
  TLatex lumi;
  lumi.SetTextSize(0.04);
  lumi.SetTextFont(42);
  lumi.DrawLatexNDC(0.715,0.95, Form("%1.1f fb^{-1} (13 TeV)", lumis[year]));

  TLatex sel;
  sel.SetTextFont(42);
  TString region;
  if (CAT.Index("notEBEB") != -1) region = "notEBEB";
  else region = "EBEB";
  sel.SetTextSize(0.03);
  sel.DrawLatexNDC(0.2, 0.8, region);
  TString ETcut;
  if (CAT.Index("ETg") != -1) ETcut = "E^{e}_{T} > 80 GeV";
  else ETcut = "E^{e}_{T} < 80 GeV";
  sel.DrawLatexNDC(0.2, 0.76, ETcut);
  TString BDTcut;
  if (CAT.Index("BDTg") != -1) BDTcut = "diphotonBDT > 0.3";
  else BDTcut = "XXXXXX";
  sel.DrawLatexNDC(0.2, 0.72, BDTcut);

  
  if (PRINT) {//save plots
    can->SaveAs(VAR+"_"+YEAR+"_"+CAT+".pdf");
    can->SaveAs(VAR+"_"+YEAR+"_"+CAT+".png");
  }
}
