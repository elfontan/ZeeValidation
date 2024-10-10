echo skimming Data_13TeV_UntaggedTag_0
root -l <<EOF 
.x makeHistos.cpp("/eos/user/a/atsatsos/ULFlashGG_Files/NewReleaseFiles/Sep2024_DataBDT_EGamma/EGamma_Summer20UL.root", "Data_13TeV_UntaggedTag_0", true, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_0
root -l <<EOF   
.x makeHistos.cpp("/eos/user/a/atsatsos/ULFlashGG_Files/NewReleaseFiles/Sep2024_DataBDT_DYtoLL/MergedRoot/allZee.root", "DYToLL_13TeV_UntaggedTag_0", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_0_SigmaEOverEShiftUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/user/a/atsatsos/ULFlashGG_Files/NewReleaseFiles/Sep2024_DataBDT_DYtoLL/MergedRoot/allZee.root", "DYToLL_13TeV_UntaggedTag_0_SigmaEOverEShiftUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_0_SigmaEOverEShiftDown01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/user/a/atsatsos/ULFlashGG_Files/NewReleaseFiles/Sep2024_DataBDT_DYtoLL/MergedRoot/allZee.root", "DYToLL_13TeV_UntaggedTag_0_SigmaEOverEShiftDown01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_0_MvaShiftUp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/user/a/atsatsos/ULFlashGG_Files/NewReleaseFiles/Sep2024_DataBDT_DYtoLL/MergedRoot/allZee.root", "DYToLL_13TeV_UntaggedTag_0_MvaShiftUp01sigma", false, "UL2018")
EOF
echo skimming DYToLL_13TeV_UntaggedTag_0_MvaShifDownp01sigma
root -l <<EOF
.x makeHistos.cpp("/eos/user/a/atsatsos/ULFlashGG_Files/NewReleaseFiles/Sep2024_DataBDT_DYtoLL/MergedRoot/allZee.root", "DYToLL_13TeV_UntaggedTag_0_MvaShiftDown01sigma", false, "UL2018")
EOF
