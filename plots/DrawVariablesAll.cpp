#include "DrawVariable.cpp"
void DrawVariablesAll(bool PRINT)
{
  //DrawVariable(TString VAR,TString YEAR,TString CAT,bool LOG,int iSyst,int REBIN,float XMIN,float XMAX,TString XTITLE,bool isINT,int XNDIV,bool PRINT)  
  //DrawVariable("dipho_lead_ptoM","UL2018","Inclusive",true,2,1,0,7,"Leading photon p_{T}/m_{#gamma#gamma}",false,505,PRINT);
  /*
  DrawVariable("CMS_hgg_mass","UL2018","Inclusive",false,2,4,80,100,"m_{ee} [GeV]",false,505,PRINT);
  DrawVariable("dipho_lead_ptoM","UL2018","Inclusive",true,2,1,0.4,7,"Leading photon p_{T}/m_{ee}",false,505,PRINT);
  DrawVariable("dipho_sublead_ptoM","UL2018","Inclusive",true,2,1,0.2,3.3,"Subleading photon p_{T}/m_{ee}",false,505,PRINT);
  DrawVariable("dipho_leadEta","UL2018","Inclusive",false,2,1,-2.6,2.6,"Leading photon #eta",false,505,PRINT);
  DrawVariable("dipho_subleadEta","UL2018","Inclusive",false,2,1,-2.6,2.6,"Subleading photon #eta",false,505,PRINT);
  DrawVariable("cosphi","UL2018","Inclusive",true,2,1,-1,1,"cos #phi",false,505,PRINT);
  DrawVariable("dipho_leadIDMVA","UL2018","Inclusive",true,2,1,-0.8,1,"Lead IDMVA",false,505,PRINT);
  DrawVariable("dipho_subleadIDMVA","UL2018","Inclusive",true,2,1,-0.8,1,"Sublead IDMVA",false,505,PRINT);
  DrawVariable("sigmaMrvoM","UL2018","Inclusive",true,2,1,0.005,0.1,"#sigma_{RV}/m_{ee}",false,505,PRINT);
  DrawVariable("sigmaMwvoM","UL2018","Inclusive",true,2,1,0.005,0.1,"#sigma_{WV}/m_{ee}",false,505,PRINT);
  DrawVariable("vtxprob","UL2018","Inclusive",true,2,4,0.14,1,"Vtx probability",false,505,PRINT);
  DrawVariable("dipho_pt","UL2018","Inclusive",false,2,1,0,200,"Diphoton p_{T} [GeV]",false,505,PRINT);
  DrawVariable("NNScore","UL2018","Inclusive",false,2,1,0,1,"NN Score",false,505,PRINT);  
  DrawVariable("nvtx","UL2018","Inclusive",false,2,1,0,60,"Number of primary vertices",false,505,PRINT);  
  DrawVariable("dipho_lead_sigmaEoE","UL2018","Inclusive",true,2,1,0.005, 0.1,"Leading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_sublead_sigmaEoE","UL2018","Inclusive",true,2,1,0.005,0.1,"Subleading photon #sigma_{E}/E",false,505,PRINT);
  */
  
  //BARREL
  DrawVariable("dipho_lead_sigmaEoE","UL2018","Inclusive",true,2,1,0.0, 0.2,"Leading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_sublead_sigmaEoE","UL2018","Inclusive",true,2,1,0.0,2,"Subleading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_leadEt","UL2018","Inclusive",true,2,1,30,100,"Lead E_{T} [GeV]",false,505,PRINT);  
  DrawVariable("dipho_leadR9","UL2018","Inclusive",true,2,1,0.8,1,"Lead R_{9}",false,505,PRINT);  
  DrawVariable("dipho_lead_sieie","UL2018","Inclusive",false,2,1,0.0,0.011,"Lead #sigma_{i#eta i#eta}",false,505,PRINT);  
  DrawVariable("dipho_lead_sieip","UL2018","Inclusive",false,2,1,-0.0002,0.0002,"Lead #sigma_{i#eta i#phi}",false,505,PRINT);  
  DrawVariable("dipho_lead_phoiso","UL2018","Inclusive",true,2,1,0.0,6,"Lead #gamma isolation",false,505,PRINT);  
  DrawVariable("dipho_lead_etawidth","UL2018","Inclusive",true,2,1,0.0,0.03,"Lead #eta width",false,505,PRINT);  
  DrawVariable("dipho_lead_phiwidth","UL2018","Inclusive",true,2,1,0.0,0.1,"Lead #phi width",false,505,PRINT);  
  DrawVariable("dipho_lead_s4ratio","UL2018","Inclusive",false,2,1,0.4,1.0,"Lead S_{4}",false,505,PRINT);  
  DrawVariable("dipho_subleadEt","UL2018","Inclusive",true,2,1,18,100,"Sublead E_{T} [GeV]",false,505,PRINT);  
  DrawVariable("dipho_subleadR9","UL2018","Inclusive",true,2,1,0.8,1,"Sublead R_{9}",false,505,PRINT);  
  DrawVariable("dipho_sublead_sieie","UL2018","Inclusive",false,2,1,0.0,0.011,"Sublead #sigma_{i#eta i#eta}",false,505,PRINT);  
  DrawVariable("dipho_sublead_sieip","UL2018","Inclusive",false,2,1,-0.0002,0.0002,"Sublead #sigma_{i#eta i#phi}",false,505,PRINT);  
  DrawVariable("dipho_sublead_phoiso","UL2018","Inclusive",true,2,1,0.0,6,"Sublead #gamma isolation",false,505,PRINT);  
  DrawVariable("dipho_sublead_etawidth","UL2018","Inclusive",true,2,1,0.0,0.03,"Sublead #eta width",false,505,PRINT);  
  DrawVariable("dipho_sublead_phiwidth","UL2018","Inclusive",true,2,1,0.0,0.1,"Sublead #phi width",false,505,PRINT);  
  DrawVariable("dipho_sublead_s4ratio","UL2018","Inclusive",false,2,1,0.4,1.0,"Sublead S_{4}",false,505,PRINT);  
  /*
  // ENDCAP
  DrawVariable("dipho_lead_sigmaEoE","UL2018","Inclusive",true,2,1,0.0, 0.2,"Leading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_sublead_sigmaEoE","UL2018","Inclusive",true,2,1,0.0,2,"Subleading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_leadEt","UL2018","Inclusive",true,2,1,30,100,"Lead E_{T} [GeV]",false,505,PRINT);  
  DrawVariable("dipho_leadR9","UL2018","Inclusive",true,2,1,0.9,1,"Lead R_{9}",false,505,PRINT);  
  DrawVariable("dipho_lead_sieie","UL2018","Inclusive",false,2,1,0.015,0.04,"Lead #sigma_{i#eta i#eta}",false,505,PRINT);  
  DrawVariable("dipho_lead_sieip","UL2018","Inclusive",false,2,1,-0.0005,0.0005,"Lead #sigma_{i#eta i#phi}",false,505,PRINT);  
  DrawVariable("dipho_lead_phoiso","UL2018","Inclusive",true,2,1,0.0,6,"Lead #gamma isolation",false,505,PRINT);  
  DrawVariable("dipho_lead_etawidth","UL2018","Inclusive",true,2,1,0.0,0.05,"Lead #eta width",false,505,PRINT);  
  DrawVariable("dipho_lead_phiwidth","UL2018","Inclusive",true,2,1,0.0,0.1,"Lead #phi width",false,505,PRINT);  
  DrawVariable("dipho_lead_s4ratio","UL2018","Inclusive",false,2,1,0.58,1.0,"Lead S_{4}",false,505,PRINT);  
  DrawVariable("dipho_subleadEt","UL2018","Inclusive",true,2,1,18,100,"Sublead E_{T} [GeV]",false,505,PRINT);  
  DrawVariable("dipho_subleadR9","UL2018","Inclusive",true,2,1,0.9,1,"Sublead R_{9}",false,505,PRINT);  
  DrawVariable("dipho_sublead_sieie","UL2018","Inclusive",false,2,1,0.015,0.04,"Sublead #sigma_{i#eta i#eta}",false,505,PRINT);  
  DrawVariable("dipho_sublead_sieip","UL2018","Inclusive",false,2,1,-0.0005,0.0005,"Sublead #sigma_{i#eta i#phi}",false,505,PRINT);  
  DrawVariable("dipho_sublead_phoiso","UL2018","Inclusive",true,2,1,0.0,6,"Sublead #gamma isolation",false,505,PRINT);  
  DrawVariable("dipho_sublead_etawidth","UL2018","Inclusive",true,2,1,0.0,0.05,"Sublead #eta width",false,505,PRINT);  
  DrawVariable("dipho_sublead_phiwidth","UL2018","Inclusive",true,2,1,0.0,0.1,"Sublead #phi width",false,505,PRINT);  
  DrawVariable("dipho_sublead_s4ratio","UL2018","Inclusive",false,2,1,0.58,1.0,"Sublead S_{4}",false,505,PRINT);  
  */
  /*
  //INCLUSIVE
  DrawVariable("dipho_lead_sigmaEoE","UL2018","Inclusive",true,2,1,0.0, 0.2,"Leading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_sublead_sigmaEoE","UL2018","Inclusive",true,2,1,0.0,2,"Subleading photon #sigma_{E}/E",false,505,PRINT);
  DrawVariable("dipho_leadEt","UL2018","Inclusive",true,2,1,30,100,"Lead E_{T} [GeV]",false,505,PRINT);  
  DrawVariable("dipho_leadR9","UL2018","Inclusive",true,2,1,0.8,1,"Lead R_{9}",false,505,PRINT);  
  DrawVariable("dipho_lead_sieie","UL2018","Inclusive",true,2,1,0.0,0.04,"Lead #sigma_{i#eta i#eta}",false,505,PRINT);  
  DrawVariable("dipho_lead_sieip","UL2018","Inclusive",false,2,1,-0.0005,0.0005,"Lead #sigma_{i#eta i#phi}",false,505,PRINT);  
  DrawVariable("dipho_lead_phoiso","UL2018","Inclusive",true,2,1,0.0,6,"Lead #gamma isolation",false,505,PRINT);  
  DrawVariable("dipho_lead_etawidth","UL2018","Inclusive",true,2,1,0.0,0.05,"Lead #eta width",false,505,PRINT);  
  DrawVariable("dipho_lead_phiwidth","UL2018","Inclusive",true,2,1,0.0,0.1,"Lead #phi width",false,505,PRINT);  
  DrawVariable("dipho_lead_s4ratio","UL2018","Inclusive",false,2,1,0.4,1.0,"Lead S_{4}",false,505,PRINT);  
  DrawVariable("dipho_subleadEt","UL2018","Inclusive",true,2,1,18,100,"Sublead E_{T} [GeV]",false,505,PRINT);  
  DrawVariable("dipho_subleadR9","UL2018","Inclusive",true,2,1,0.8,1,"Sublead R_{9}",false,505,PRINT);  
  DrawVariable("dipho_sublead_sieie","UL2018","Inclusive",true,2,1,0.0,0.04,"Sublead #sigma_{i#eta i#eta}",false,505,PRINT);  
  DrawVariable("dipho_sublead_sieip","UL2018","Inclusive",false,2,1,-0.0005,0.0005,"Sublead #sigma_{i#eta i#phi}",false,505,PRINT);  
  DrawVariable("dipho_sublead_phoiso","UL2018","Inclusive",true,2,1,0.0,6,"Sublead #gamma isolation",false,505,PRINT);  
  DrawVariable("dipho_sublead_etawidth","UL2018","Inclusive",true,2,1,0.0,0.05,"Sublead #eta width",false,505,PRINT);  
  DrawVariable("dipho_sublead_phiwidth","UL2018","Inclusive",true,2,1,0.0,0.1,"Sublead #phi width",false,505,PRINT);  
  DrawVariable("dipho_sublead_s4ratio","UL2018","Inclusive",false,2,1,0.4,1.0,"Sublead S_{4}",false,505,PRINT);  
  */
}
