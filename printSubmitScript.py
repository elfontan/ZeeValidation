import ROOT as rt

inf = rt.TFile("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "READ")

base_script="""echo skimming Data_13TeV_UntaggedTag
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/DataUL2018_ZeeTree_BDT_tran_ptWgt_summer20.root", "Data_13TeV_UntaggedTag", true)
EOF
"""
with open("submit_makeHistos.sh",'w') as f:
    f.write(base_script)
    for tree in inf.GetListOfKeys():
        content="""echo skimming {0}
root -l <<EOF
.x makeHistos.cpp("/eos/cms/store/group/phys_higgs/cmshgg/zhenxuan/Hgg_mass/MiniTree/UL2018/UL2018_Summer20_DYMC_with_ScaleSmear/with_SS_non_linearity/hadded_more_dense/output_dense.root", "{0}", false)
EOF
""".format(tree.GetName())
        print(f'"{tree.GetName()}",')
        f.write(content)
        #print(inf.Get(tree).GetName())
