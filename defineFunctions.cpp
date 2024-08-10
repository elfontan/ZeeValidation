void defineQuantitiesOfInterest (ROOT::RDF::RInterface<ROOT::Detail::RDF::RJittedFilter, void> & f) {
  //"one" quantity. This is a dummy quantity that is used, in data, as a per-event weight when filling histograms
  f = f.Define("one", "return 1");
};

class Histogrammer {

public:
  //initialize histograms to be produced as public members here
  ROOT::RDF::RResultPtr<TH1D> h_CMS_hgg_mass;
  void defineHistos(ROOT::RDF::RInterface<ROOT::Detail::RDF::RJittedFilter, void> f, bool isData);
  void writeHistos(TString name);
};

void Histogrammer::defineHistos (ROOT::RDF::RInterface<ROOT::Detail::RDF::RJittedFilter, void> f, bool isData) {
  
  std::string_view weight;
  if (isData) weight = "one"; //weight of 1 if data
  else weight = "weight"; //use weight variable in fgg trees if MC
  
  //define histograms here
  this->h_CMS_hgg_mass = f.Histo1D({"CMS_hgg_mass", "CMS_hgg_mass", 200u, 80., 100.}, "CMS_hgg_mass", weight);
  
}

void Histogrammer::writeHistos (TString name) {
  //instructions to write histograms here
  this->h_CMS_hgg_mass->Write(TString(this->h_CMS_hgg_mass->GetName())+"_"+name);
}

