echo skimming Data_13TeV_UntaggedTag
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/SingleEleData_preVFP_Zee_BDT_tran_UL16_preVFP_ptwgt.root", "Data_13TeV_UntaggedTag", true, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityUp
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityUp", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityDown
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityDown", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MvaShiftUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MvaShiftUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MvaShiftDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MvaShiftDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoUp01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2016/preVFP/DYMC_with_ScaleSmear/withSS/output_DYJetsToLL_M-50_TuneCP5_13TeV-amcatnloFXFX-pythia8_0_BDT_with_allsyst_withSS_nonLinearity_alldense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoDown01sigma", false, "UL2016_preVFP", "ETg80_notEBEB_diphoBDTg0p3")
EOF
