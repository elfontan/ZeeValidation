//#include "rDataFrameFunctions.cpp"
//#include "muonSelection.cpp"
//#include "electronSelection.cpp"
//#include "jetSelection.cpp"
#include "defineFunctions.cpp"

void makeHistos(std::string_view file, std::string_view tree, bool isdata, TString year, TString label) {
  
  std::string u = std::string(file);
  gBenchmark->Start("running time");
  //ROOT::EnableImplicitMT(5); // Tell ROOT you want to go parallel

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~ SELECTION REQUIREMENTS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  ROOT::RDataFrame d0(tree, string_view(u)); // Interface to TTree and TChain
  //Some selection
  //ET<80, EBEB, diphotonBDT>0.3
  //auto f = d0.Filter("(leadptom*CMS_hgg_mass < 80 && subleadptom*CMS_hgg_mass < 80) && (abs(leadeta)<1.5 && abs(subleadeta)<1.5) && Tran_DiphotonMVA_self > 0.3");
  //ET>80, EBEB, diphotonBDT>0.3
  //auto f = d0.Filter("(leadptom*CMS_hgg_mass > 80 && subleadptom*CMS_hgg_mass > 80) && (abs(leadeta)<1.5 && abs(subleadeta)<1.5) && Tran_DiphotonMVA_self > 0.3");
  //ET<80, notEBEB, diphotonBDT>0.3
  //auto f = d0.Filter("(leadptom*CMS_hgg_mass < 80 && subleadptom*CMS_hgg_mass < 80) && !(abs(leadeta)<1.5 && abs(subleadeta)<1.5) && (abs(leadeta)<2.1 && abs(subleadeta)<2.1) && Tran_DiphotonMVA_self > 0.3");
  //ET>80, notEBEB, diphotonBDT>0.3
  auto f = d0.Filter("(leadptom*CMS_hgg_mass > 80 && subleadptom*CMS_hgg_mass > 80) && !(abs(leadeta)<1.5 && abs(subleadeta)<1.5) && (abs(leadeta)<2.1 && abs(subleadeta)<2.1) && Tran_DiphotonMVA_self > 0.3");
  ///////////////////////////////////////////////////////////////////////////////////////////
  ///////// DEFINE QUANTITIES OF INTEREST TO BE PLOTTED LATER ///////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////
  
  defineQuantitiesOfInterest(f);
  
  if (isdata) {//if data, fill histograms with no generator weight
    
    std::cout << "Running on data." << std::endl;
    //book histogrammers and define the wanted histograms
    Histogrammer H;
    defineHistos(H, f, isdata);
      
    TFile *outputfile = new TFile( "makeHistos_output_" + TString(tree) + "_" + year + "_" + label + ".root", "RECREATE" );
    writeHistos(H, year+"_"+label);
    outputfile->Close();
    delete outputfile;
    
  }
  
  else {

    std::cout << "Running on MC." << std::endl;
    //book histogrammers and define the wanted histograms
    Histogrammer H;
    defineHistos(H, f, isdata);
    TFile *outputfile = new TFile( "makeHistos_output_" + TString(tree) + "_" + year + "_" + label + ".root", "RECREATE" );
    writeHistos(H, year+"_"+label);
    //GenEventWeight->Write();
    
      outputfile->Close();
      delete outputfile;
  }
  
  std::cout << "Done. Event loop has been run " << d0.GetNRuns() << " times." << std::endl;
  gBenchmark->Show("running time");

}
