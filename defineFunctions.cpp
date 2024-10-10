void defineQuantitiesOfInterest (ROOT::RDF::RInterface<ROOT::Detail::RDF::RJittedFilter, void> & f) {
  //"one" quantity. This is a dummy quantity that is used, in data, as a per-event weight when filling histograms
  f = f.Define("one", "return 1");
};

class Histogrammer {
public:
  //initialize histograms to be produced as public members here
  ROOT::RDF::RResultPtr<TH1D> h_CMS_hgg_mass;
  // Add histos for all pNN input variables and related quantities
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_ptoM;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_ptoM;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_leadEta;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_subleadEta;
  ROOT::RDF::RResultPtr<TH1D> h_cosphi;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_leadIDMVA;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_subleadIDMVA;
  ROOT::RDF::RResultPtr<TH1D> h_sigmaMrvoM;
  ROOT::RDF::RResultPtr<TH1D> h_sigmaMwvoM;
  ROOT::RDF::RResultPtr<TH1D> h_vtxprob;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_sigmaEoE;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_sigmaEoE;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_pt;
  //ROOT::RDF::RResultPtr<TH1D> h_NNScore;
  ROOT::RDF::RResultPtr<TH1D> h_nvtx;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_leadEt;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_subleadEt;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_leadR9;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_subleadR9;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_sieie;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_sieie;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_phoiso;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_phoiso;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_sieip;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_sieip;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_etawidth;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_etawidth;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_phiwidth;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_phiwidth;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_lead_s4ratio;
  ROOT::RDF::RResultPtr<TH1D> h_dipho_sublead_s4ratio;  
};



void defineHistos (Histogrammer & hgr, ROOT::RDF::RInterface<ROOT::Detail::RDF::RJittedFilter, void> f, bool isData) {
  std::string_view weight;
  if (isData) weight = "one"; //weight of 1 if data
  else weight = "weight"; //use weight variable in fgg trees if MC
  
  //define histograms here
  hgr.h_CMS_hgg_mass = f.Histo1D({"CMS_hgg_mass", "CMS_hgg_mass", 200u, 80., 100.}, "CMS_hgg_mass", weight);
  hgr.h_dipho_lead_ptoM = f.Histo1D({"dipho_lead_ptoM", "dipho_lead_ptoM", 70u, 0., 7.}, "dipho_lead_ptoM", weight);
  hgr.h_dipho_sublead_ptoM = f.Histo1D({"dipho_sublead_ptoM", "dipho_sublead_ptoM", 70u, 0., 7.}, "dipho_sublead_ptoM", weight);
  hgr.h_dipho_leadEta = f.Histo1D({"dipho_leadEta", "dipho_leadEta", 60u, -3., 3.}, "dipho_leadEta", weight);
  hgr.h_dipho_subleadEta = f.Histo1D({"dipho_subleadEta", "dipho_subleadEta", 60u, -3., 3.}, "dipho_subleadEta", weight);
  hgr.h_cosphi = f.Histo1D({"cosphi", "cosphi", 60u, -1., 1.}, "cosphi", weight);
  hgr.h_dipho_leadIDMVA = f.Histo1D({"dipho_leadIDMVA", "dipho_leadIDMVA", 20u, -1., 1.}, "dipho_leadIDMVA", weight);
  hgr.h_dipho_subleadIDMVA = f.Histo1D({"dipho_subleadIDMVA", "dipho_subleadIDMVA", 20u, -1., 1.}, "dipho_subleadIDMVA", weight);
  hgr.h_sigmaMrvoM = f.Histo1D({"sigmaMrvoM", "sigmaMrvoM", 50u, 0., 0.1}, "sigmaMrvoM", weight);
  hgr.h_sigmaMwvoM = f.Histo1D({"sigmaMwvoM", "sigmaMwvoM", 50u, 0., 0.1}, "sigmaMwvoM", weight);
  hgr.h_vtxprob = f.Histo1D({"vtxprob", "vtxprob", 100u, 0., 1.0}, "vtxprob", weight);
  hgr.h_dipho_lead_sigmaEoE = f.Histo1D({"dipho_lead_sigmaEoE", "dipho_lead_sigmaEoE", 50u, 0., 0.1}, "dipho_lead_sigmaEoE", weight);
  hgr.h_dipho_sublead_sigmaEoE = f.Histo1D({"dipho_sublead_sigmaEoE", "dipho_sublead_sigmaEoE", 50u, 0., 0.1}, "dipho_sublead_sigmaEoE", weight);
  hgr.h_dipho_pt = f.Histo1D({"dipho_pt", "dipho_pt", 65u, 0., 260}, "dipho_pt", weight);
  hgr.h_nvtx = f.Histo1D({"nvtx", "nvtx", 50u, 0., 100}, "nvtx", weight);
  hgr.h_dipho_leadEt = f.Histo1D({"dipho_leadEt", "dipho_leadEt", 100u, 0., 100}, "dipho_leadEt", weight);
  hgr.h_dipho_subleadEt = f.Histo1D({"dipho_subleadEt", "dipho_subleadEt", 100u, 0., 100}, "dipho_subleadEt", weight);
  hgr.h_dipho_leadR9 = f.Histo1D({"dipho_leadR9", "dipho_leadR9", 60u, 0.8, 1}, "dipho_leadR9", weight);
  hgr.h_dipho_subleadR9 = f.Histo1D({"dipho_subleadR9", "dipho_subleadR9", 60u, 0.8, 1}, "dipho_subleadR9", weight);
  hgr.h_dipho_lead_sieie = f.Histo1D({"dipho_lead_sieie", "dipho_lead_sieie", 400u, 0.0, 0.04}, "dipho_lead_sieie", weight);
  hgr.h_dipho_sublead_sieie = f.Histo1D({"dipho_sublead_sieie", "dipho_sublead_sieie", 400u, 0.0, 0.04}, "dipho_sublead_sieie", weight);
  hgr.h_dipho_lead_phoiso = f.Histo1D({"dipho_lead_phoiso", "dipho_lead_phoiso", 120u, 0.0, 6.0}, "dipho_lead_phoiso", weight);
  hgr.h_dipho_sublead_phoiso = f.Histo1D({"dipho_sublead_phoiso", "dipho_sublead_phoiso", 120u, 0.0, 6.0}, "dipho_sublead_phoiso", weight);
  hgr.h_dipho_lead_sieip = f.Histo1D({"dipho_lead_sieip", "dipho_lead_sieip", 100u, -0.0005, 0.0005}, "dipho_lead_sieip", weight);
  hgr.h_dipho_sublead_sieip = f.Histo1D({"dipho_sublead_sieip", "dipho_sublead_sieip", 100u, -0.0005, 0.0005}, "dipho_sublead_sieip", weight);
  if (isData){
    hgr.h_dipho_lead_etawidth = f.Histo1D({"dipho_lead_etawidth", "dipho_lead_etawidth", 50u, 0.0, 0.05}, "dipho_lead_scetawidth", weight);
    hgr.h_dipho_sublead_etawidth = f.Histo1D({"dipho_sublead_etawidth", "dipho_sublead_etawidth", 50u, 0.0, 0.05}, "dipho_sublead_scetawidth", weight);
    hgr.h_dipho_lead_phiwidth = f.Histo1D({"dipho_lead_phiwidth", "dipho_lead_phiwidth", 1000u, 0.0, 1.0}, "dipho_lead_scphiwidth", weight);
    hgr.h_dipho_sublead_phiwidth = f.Histo1D({"dipho_sublead_phiwidth", "dipho_sublead_phiwidth", 1000u, 0.0, 1.0}, "dipho_sublead_scphiwidth", weight);
  }
  else{
    hgr.h_dipho_lead_etawidth = f.Histo1D({"dipho_lead_etawidth", "dipho_lead_etawidth", 50u, 0.0, 0.05}, "dipho_lead_etawidth", weight);
    hgr.h_dipho_sublead_etawidth = f.Histo1D({"dipho_sublead_etawidth", "dipho_sublead_etawidth", 50u, 0.0, 0.05}, "dipho_sublead_etawidth", weight);
    hgr.h_dipho_lead_phiwidth = f.Histo1D({"dipho_lead_phiwidth", "dipho_lead_phiwidth", 1000u, 0.0, 1.0}, "dipho_lead_phiwidth", weight);
    hgr.h_dipho_sublead_phiwidth = f.Histo1D({"dipho_sublead_phiwidth", "dipho_sublead_phiwidth", 1000u, 0.0, 1.0}, "dipho_sublead_phiwidth", weight);
  }
  hgr.h_dipho_lead_s4ratio = f.Histo1D({"dipho_lead_s4ratio", "dipho_lead_s4ratio", 70u, 0.3, 1.0}, "dipho_lead_s4ratio", weight);
  hgr.h_dipho_sublead_s4ratio = f.Histo1D({"dipho_sublead_s4ratio", "dipho_sublead_s4ratio", 70u, 0.3, 1.0}, "dipho_sublead_s4ratio", weight);
  //hgr.h_NNScore = f.Histo1D({"NNScore", "NNScore", 100u, 0., 1}, "NNScore", weight);
}


void writeHistos (Histogrammer hgr, TString name) {
  //instructions to write histograms here
  hgr.h_CMS_hgg_mass->Write(TString(hgr.h_CMS_hgg_mass->GetName())+"_"+name);
  // Add new histos
  hgr.h_dipho_lead_ptoM->Write(TString(hgr.h_dipho_lead_ptoM->GetName())+"_"+name);
  hgr.h_dipho_sublead_ptoM->Write(TString(hgr.h_dipho_sublead_ptoM->GetName())+"_"+name);
  hgr.h_dipho_leadEta->Write(TString(hgr.h_dipho_leadEta->GetName())+"_"+name);
  hgr.h_dipho_subleadEta->Write(TString(hgr.h_dipho_subleadEta->GetName())+"_"+name);
  hgr.h_cosphi->Write(TString(hgr.h_cosphi->GetName())+"_"+name);
  hgr.h_dipho_leadIDMVA->Write(TString(hgr.h_dipho_leadIDMVA->GetName())+"_"+name);
  hgr.h_dipho_subleadIDMVA->Write(TString(hgr.h_dipho_subleadIDMVA->GetName())+"_"+name);
  hgr.h_sigmaMrvoM->Write(TString(hgr.h_sigmaMrvoM->GetName())+"_"+name);
  hgr.h_sigmaMwvoM->Write(TString(hgr.h_sigmaMwvoM->GetName())+"_"+name);
  hgr.h_vtxprob->Write(TString(hgr.h_vtxprob->GetName())+"_"+name);
  hgr.h_dipho_lead_sigmaEoE->Write(TString(hgr.h_dipho_lead_sigmaEoE->GetName())+"_"+name);
  hgr.h_dipho_sublead_sigmaEoE->Write(TString(hgr.h_dipho_sublead_sigmaEoE->GetName())+"_"+name);
  hgr.h_dipho_pt->Write(TString(hgr.h_dipho_pt->GetName())+"_"+name);
  //hgr.h_NNScore->Write(TString(hgr.h_NNScore->GetName())+"_"+name);
  hgr.h_nvtx->Write(TString(hgr.h_nvtx->GetName())+"_"+name);
  hgr.h_dipho_leadEt->Write(TString(hgr.h_dipho_leadEt->GetName())+"_"+name);
  hgr.h_dipho_leadR9->Write(TString(hgr.h_dipho_leadR9->GetName())+"_"+name);
  hgr.h_dipho_lead_sieie->Write(TString(hgr.h_dipho_lead_sieie->GetName())+"_"+name);
  hgr.h_dipho_lead_phoiso->Write(TString(hgr.h_dipho_lead_phoiso->GetName())+"_"+name);
  hgr.h_dipho_lead_sieip->Write(TString(hgr.h_dipho_lead_sieip->GetName())+"_"+name);
  hgr.h_dipho_lead_etawidth->Write(TString(hgr.h_dipho_lead_etawidth->GetName())+"_"+name);
  hgr.h_dipho_lead_phiwidth->Write(TString(hgr.h_dipho_lead_phiwidth->GetName())+"_"+name);
  hgr.h_dipho_lead_s4ratio->Write(TString(hgr.h_dipho_lead_s4ratio->GetName())+"_"+name);
  hgr.h_dipho_lead_sigmaEoE->Write(TString(hgr.h_dipho_lead_sigmaEoE->GetName())+"_"+name);
  hgr.h_dipho_subleadEt->Write(TString(hgr.h_dipho_subleadEt->GetName())+"_"+name);
  hgr.h_dipho_subleadR9->Write(TString(hgr.h_dipho_subleadR9->GetName())+"_"+name);
  hgr.h_dipho_sublead_sieie->Write(TString(hgr.h_dipho_sublead_sieie->GetName())+"_"+name);
  hgr.h_dipho_sublead_phoiso->Write(TString(hgr.h_dipho_sublead_phoiso->GetName())+"_"+name);
  hgr.h_dipho_sublead_sieip->Write(TString(hgr.h_dipho_sublead_sieip->GetName())+"_"+name);
  hgr.h_dipho_sublead_etawidth->Write(TString(hgr.h_dipho_sublead_etawidth->GetName())+"_"+name);
  hgr.h_dipho_sublead_phiwidth->Write(TString(hgr.h_dipho_sublead_phiwidth->GetName())+"_"+name);
  hgr.h_dipho_sublead_s4ratio->Write(TString(hgr.h_dipho_sublead_s4ratio->GetName())+"_"+name);
}
