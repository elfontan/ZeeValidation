#include "defineFunctions.cpp"

void makeHistos(std::string_view file, std::string_view tree, bool isdata, TString year) {
  
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
  //Define dataframes for each selection
  auto f_ETl80_EBEB_diphoBDTg0p3 = d0.Filter("(leadptom*CMS_hgg_mass < 80 && subleadptom*CMS_hgg_mass < 80) && (abs(leadeta)<1.5 && abs(subleadeta)<1.5) && Tran_DiphotonMVA_self > 0.3");
  auto f_ETg80_EBEB_diphoBDTg0p3 = d0.Filter("(leadptom*CMS_hgg_mass > 80 && subleadptom*CMS_hgg_mass > 80) && (abs(leadeta)<1.5 && abs(subleadeta)<1.5) && Tran_DiphotonMVA_self > 0.3");
  auto f_ETl80_notEBEB_diphoBDTg0p3 = d0.Filter("(leadptom*CMS_hgg_mass < 80 && subleadptom*CMS_hgg_mass < 80) && !(abs(leadeta)<1.5 && abs(subleadeta)<1.5) && (abs(leadeta)<2.1 && abs(subleadeta)<2.1) && Tran_DiphotonMVA_self > 0.3");
  auto f_ETg80_notEBEB_diphoBDTg0p3 = d0.Filter("(leadptom*CMS_hgg_mass > 80 && subleadptom*CMS_hgg_mass > 80) && !(abs(leadeta)<1.5 && abs(subleadeta)<1.5) && (abs(leadeta)<2.1 && abs(subleadeta)<2.1) && Tran_DiphotonMVA_self > 0.3");

  ///////////////////////////////////////////////////////////////////////////////////////////
  ///////// DEFINE QUANTITIES OF INTEREST TO BE PLOTTED LATER ///////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////
  
  defineQuantitiesOfInterest(f_ETl80_EBEB_diphoBDTg0p3);
  defineQuantitiesOfInterest(f_ETg80_EBEB_diphoBDTg0p3);
  defineQuantitiesOfInterest(f_ETl80_notEBEB_diphoBDTg0p3);
  defineQuantitiesOfInterest(f_ETg80_notEBEB_diphoBDTg0p3);

  if (isdata) std::cout << "Running on data." << std::endl;
  else std::cout << "Running on MC." << std::endl; 
  
  //book histogrammers and define the wanted histograms
  Histogrammer H_ETl80_EBEB_diphoBDTg0p3, H_ETg80_EBEB_diphoBDTg0p3, H_ETl80_notEBEB_diphoBDTg0p3, H_ETg80_notEBEB_diphoBDTg0p3;
  defineHistos(H_ETl80_EBEB_diphoBDTg0p3, f_ETl80_EBEB_diphoBDTg0p3, isdata);
  defineHistos(H_ETg80_EBEB_diphoBDTg0p3, f_ETg80_EBEB_diphoBDTg0p3, isdata);
  defineHistos(H_ETl80_notEBEB_diphoBDTg0p3, f_ETl80_notEBEB_diphoBDTg0p3, isdata);
  defineHistos(H_ETg80_notEBEB_diphoBDTg0p3, f_ETg80_notEBEB_diphoBDTg0p3, isdata);
  
  TFile *outputfile = new TFile( "makeHistos_output_" + TString(tree) + "_" + year +".root", "RECREATE" );
  writeHistos(H_ETl80_EBEB_diphoBDTg0p3, year+"_ETl80_EBEB_diphoBDTg0p3");
  writeHistos(H_ETg80_EBEB_diphoBDTg0p3, year+"_ETg80_EBEB_diphoBDTg0p3");
  writeHistos(H_ETl80_notEBEB_diphoBDTg0p3, year+"_ETl80_notEBEB_diphoBDTg0p3");
  writeHistos(H_ETg80_notEBEB_diphoBDTg0p3, year+"_ETg80_notEBEB_diphoBDTg0p3");
  outputfile->Close();
  delete outputfile;

  std::cout << "Done. Event loop has been run " << d0.GetNRuns() << " times." << std::endl;
  gBenchmark->Show("running time");

}
