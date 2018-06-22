void t2k2_sensitivity() {
   //Draw a simple graph
   // To see the output of this macro, click begin_html <a href="gif/graph.gif">here</a>. end_html
   //Author: Rene Brun

   TCanvas *c1 = new TCanvas("c1","",200,10,700,500);

  const Int_t n = 73;
   Double_t x[n] = {-180, -175, -170,-165, -160,-155, -150,-145, -140,-135, -130,-125,  -120,-115, -110,-105, -100,-95,  -90,-85, -80,-75, -70,-65,  -60,-55, -50,-45, -40,-35,  -30,-25, -20,-15, -10,-5,   0,5, 10,15, 20,25, 30,35, 40,45, 50,55,  60,65, 70,75, 80,85,  90,95, 100,105, 110,115,  120,125, 130,135, 140,145,  150,155, 160,165, 170,175,  180};
   Double_t y[n] = {0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,
0,0,0};
   TGraph *h1 = new TGraph(n,x,y);
   h1->SetTitle("");
   h1->GetXaxis()->SetTitle("True #delta_{CP}[degree]");
   h1->GetYaxis()->SetTitle("#Delta#chi^{2} to exclude sin#delta_{CP} = 0");
   h1->GetYaxis()->SetRangeUser(0,20);
   h1->GetXaxis()->SetRangeUser(-180, 180);
   h1->GetYaxis()->CenterTitle();
   h1->GetXaxis()->CenterTitle();
   h1->Draw("AC");






/*################## sin^2(theta_23) = 0.6 ################*/

  const Int_t n_1 = 37;
   Double_t x_1[n_1] = {-180,-170,-160,-150,-140, -130, -120,-110,-100,
	    -90, -80, -70, -60, -50, -40, -30, -20, -10, 0, 10, 20, 30, 40,
	     50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180};
   Double_t y_1[n_1] = {
-4.14716e-13,
0.34365,
1.31176,
2.76599,
4.52385,
6.38024,
8.13084,
9.59479,
10.6345,
11.1701,
11.1879,
10.7406,
9.56479,
7.63984,
5.25968,
3.12544,
1.44132,
0.36723,
-3.61145e-13,
0.361197,
1.39341,
2.96598,
4.89022,
6.94264,
8.8934,
10.5359,
11.7128,//80
12.3348,//90
12.3899,//100
11.7128,//110
10.3358,
7.79192,
5.30824,
3.11846,
1.42099,
0.357673,
-4.06894e-13


};

   TGraph *total_1 = new TGraph(n_1,x_1,y_1);
   	total_1->SetLineColor(2);
   	total_1->SetLineWidth(2);
	//total_1->SetLineStyle(7);
   	total_1->Draw("C same");

/*################## sin^2(theta_23) = 0.5 ################*/

  const Int_t n_2 = 37;
   Double_t x_2[n_2] = {-180,-170,-160,-150,-140, -130, -120,-110,-100,
	    -90, -80, -70, -60, -50, -40, -30, -20, -10, 0, 10, 20, 30, 40,
	     50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180};
   Double_t y_2[n_2] = {
-3.69157e-13,
0.419221,
1.5994,
3.37108,
5.51186,
7.77249,
9.90518,
11.6907,
12.8904,
13.5305,
13.542,
12.9886,
11.6907,
9.27923,
6.38536,
3.82911,
1.76775,
0.450931,
-3.45485e-13,
0.444659,
1.71757,
3.66035,
6.04145,
8.58475,
11.0052,
13.0466,
14.5142,//80
15.2988,//90
15.3863,//100
14.5142,//110
12.5655,
9.5387,
6.49529,
3.81373,
1.73672,
0.436864,
-3.42073e-13

};

   TGraph *total_2 = new TGraph(n_2,x_2,y_2);
   	total_2->SetLineColor(3);
   	total_2->SetLineWidth(2);
	//total_2->SetLineStyle(7);
   	total_2->Draw("C same");

/*################## sin^2(theta_23) = 0.43 ################*/

  const Int_t n_3 = 37;
   Double_t x_3[n_3] = {-180,-170,-160,-150,-140, -130, -120,-110,-100,
	    -90, -80, -70, -60, -50, -40, -30, -20, -10, 0, 10, 20, 30, 40,
	     50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180};
   Double_t y_3[n_3] = {
-3.25883e-13,
0.46383,
1.76895,
3.72725,
6.0926,
8.58979,
10.9456,
12.919,
14.3264,
15.0615,
15.105,
14.5257,
12.919,
10.3856,
7.15709,
4.25849,
1.96696,
0.50207,
-3.14245e-13,
0.495805,//10
1.91645,//20
4.08658,//30
6.74784,
9.59081,
12.2957,
14.5756,
16.2139,//80
17.0908,//90
17.1935,//100
16.2139,//110
14.0409,//120
10.5776,
7.20012,
4.22605,
1.92378,
0.48373,
-3.33551e-13

};

   TGraph *total_3 = new TGraph(n_3,x_3,y_3);
   	total_3->SetLineColor(4);
   	total_3->SetLineWidth(2);
	//total_3->SetLineStyle(7);
   	total_3->Draw("C same");

  /* Draw horizontal lines   */
    c1->Update();
    //TLine *l1 = new TLine(c1->GetUxmin(), 4, c1->GetUxmax(), 4);
    //l1->SetLineColor(3);
    //l1->SetLineWidth(1);
    //l1->Draw("L SAME");
    TLine *l2 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l2->SetLineColor(1);
    l2->Draw("L SAME");
/*    TLine *l3 = new TLine(c1->GetUxmin(), 11, c1->GetUxmax(), 11);
    l3->SetLineColor(4);
    l3->Draw("L SAME");
    TLine *l4 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l4->SetLineColor(4);
    l4->Draw("L SAME");
*/
    TLegend * pleg = new TLegend(0.2,0.75,0.3,0.85);
    //pleg -> AddEntry( l1 , "2#sigma" ,"l");
    pleg -> AddEntry( l2 , "3#sigma" ,"l");
    //pleg -> AddEntry( l3 , "11" ,"");
    //pleg -> AddEntry( l4 , "3#sigma C.L." ,"l");
   
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(14);
    pleg ->SetTextFont(43);
    pleg -> Draw();



gStyle->SetOptStat(0);
leg = new TLegend(0.4,0.7,0.6,0.85);
leg->SetTextSize(0.03);
leg->SetTextColor(1);
leg->SetFillColor(0);
leg->SetBorderSize(0);
leg ->SetTextSize(14);
leg ->SetTextFont(43);
leg->AddEntry(total_1,"sin^{2}#theta_{23} = 0.6","l");
leg->AddEntry(total_2,"sin^{2}#theta_{23} = 0.5","l");
leg->AddEntry(total_3,"sin^{2}#theta_{23} = 0.43","l");
leg->Draw();



    gPad->Print("t2k2_sensitivity.pdf");//pdf format

}

