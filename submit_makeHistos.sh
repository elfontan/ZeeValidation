echo skimming Data_13TeV_UntaggedTag
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/DataUL2018_ZeeTree_BDT_tran_ptWgt_summer20.root", "Data_13TeV_UntaggedTag", true, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityUp
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityUp", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityDown
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleNonLinearityDown", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_SigmaEOverEShiftDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MvaShiftUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MvaShiftUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MvaShiftDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MvaShiftDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EBDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleHighR9EEDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EBDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCScaleLowR9EEDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EBRhoDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearHighR9EERhoDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EBRhoDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "DYToLL_13TeV_UntaggedTag_MCSmearLowR9EERhoDown01sigma", false, "UL2018")
EOF
