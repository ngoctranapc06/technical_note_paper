#include "TF1.h"
#include "TH1F.h"
#include "TFile.h"
#include "TTree.h"
#include "TGraph.h"
#include <iostream>
#include <fstream>
using namespace std;


////////// write root file to file.txt /////////
void rebinflux(){
//Open the file
 TFile *f = new TFile("t2kflux_2016_plus250kA.root");
//Get histograms from the file
 TH1F *h1 = (TH1F*)f->Get("enu_sk_nue");
 h1->Rebin();
 TH1F *h2 = (TH1F*)f->Get("enu_sk_numu");
 h2->Rebin();
 TH1F *h3 = (TH1F*)f->Get("enu_sk_nueb");
 h3->Rebin();
 TH1F *h4 = (TH1F*)f->Get("enu_sk_numub");
 h4->Rebin();

float a,b,c,d,e,k,l;
Int_t n = h1->GetNbinsX();

  ofstream myfile;
  myfile.open ("t2kflux_2016_plus.txt");
  myfile << "E[GeV]	nue		numu		nutau	anti-nue	anti-numu	anti-nutau\n";
   
  for (Int_t i=1;i<=n;i++){
float m=h1->GetBinCenter(i);
a=m;
//b=h1->Integral(i-1,i);
//c=h2->Integral(i-1,i);
//e=h3->Integral(i-1,i);
//k=h4->Integral(i-1,i);
b=h1->GetBinContent(i);
c=h2->GetBinContent(i);
e=h3->GetBinContent(i);
k=h4->GetBinContent(i);
    myfile <<  a << "	" << b << "		"<< c <<"		"<< d <<"	"<< e<<"		"<< k <<"		"<< l <<"\n"; //write to file

  }
  myfile.close();
}























