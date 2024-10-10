#include "defineFunctions.cpp"

void makeHistos(std::string_view file, std::string_view tree, bool isdata, TString year) {
  
  std::string u = std::string(file);
  std::string fullTreePath = "tagsDumper/trees/" + std::string(tree);
  gBenchmark->Start("running time");
  //ROOT::EnableImplicitMT(5); // Tell ROOT you want to go parallel

  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~ SELECTION REQUIREMENTS ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

  ROOT::RDataFrame d0(fullTreePath, string_view(u)); // Interface to TTree and TChain
  //Define dataframes for each selection
  //auto f_Inclusive = d0.Filter("(CMS_hgg_mass > 80 && CMS_hgg_mass < 100)");
  //auto f_Inclusive = d0.Filter("(CMS_hgg_mass > 80 && CMS_hgg_mass < 100 && abs(dipho_leadEta) < 1.4442 && abs(dipho_subleadEta) < 1.4442 && dipho_subleadEt < 25)");
  auto f_Inclusive = d0.Filter("(CMS_hgg_mass > 80 && CMS_hgg_mass < 100 && abs(dipho_leadEta) > 1.566 && abs(dipho_subleadEta) > 1.566  && dipho_subleadEt < 25)");
  //auto f_Inclusive = d0.Filter("(CMS_hgg_mass > 80 && CMS_hgg_mass < 100 && abs(dipho_leadEta) > 1.566 && abs(dipho_subleadEta) > 1.566  && (dipho_leadEt < 25 || dipho_subleadEt < 25))");
  //auto f_Inclusive = d0.Filter("(CMS_hgg_mass > 80 && CMS_hgg_mass < 100 && abs(dipho_leadEta) < 1.4442 && abs(dipho_subleadEta) < 1.4442)");
  //auto f_Inclusive = d0.Filter("(CMS_hgg_mass > 80 && CMS_hgg_mass < 100 && abs(dipho_leadEta) > 1.566 && abs(dipho_subleadEta) > 1.566)");

  ///////////////////////////////////////////////////////////////////////////////////////////
  ///////// DEFINE QUANTITIES OF INTEREST TO BE PLOTTED LATER ///////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////
  
  defineQuantitiesOfInterest(f_Inclusive);

  if (isdata) std::cout << "Running on data." << std::endl;
  else std::cout << "Running on MC." << std::endl; 
  
  //book histogrammers and define the wanted histograms
  Histogrammer H_Inclusive;
  defineHistos(H_Inclusive, f_Inclusive, isdata);
  
  TFile *outputfile = new TFile("histos/"+ TString(tree) + "_" + year +".root", "RECREATE" );
  writeHistos(H_Inclusive, year+"_Inclusive");
  outputfile->Close();
  delete outputfile;

  std::cout << "Done. Event loop has been run " << d0.GetNRuns() << " times." << std::endl;
  gBenchmark->Show("running time");
}
