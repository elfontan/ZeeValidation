# ZeeValidation
Simple framework to skim trees and produce Zee validation plots in the context of H(γγ) analyses.

## Instructions
* Skim data, MC and systematics trees by doing `./submit_makeHistos.sh`
* `mkdir histos_UL2018`
* `mv makeHistos_output_D* histos_UL2018`
* `cd plots`
* `root -l setTDRStyle.C`
* `.x DrawVariablesAll.cpp(true)`
