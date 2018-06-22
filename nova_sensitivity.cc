void nova_sensitivity() {
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
   h1->GetYaxis()->SetRangeUser(0,10);
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
-7.38699e-14,
0.146423,
0.560177,
1.18038,
1.92304,
2.69192,
3.39086,
3.93771,
4.27226,
4.36308,
4.20825,
3.8373,
3.30684,
2.69237,
1.95873,
1.16921,
0.541041,
0.138237,
-8.12625e-14,
0.137737,
0.531341,
1.13112,
1.8645,
2.64378,
3.37689,
3.9769,
4.38265,
4.51916,
4.38514,
4.00127,
3.42138,
2.72568,
2.00969,
1.28763,
0.594183,
0.151087,
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
0.181204,
0.693033,
1.46004,
2.37831,
3.32895,
4.19458,
4.87289,
5.28951,
5.40536,
5.21792,
4.71442,
4.0607,
3.30408,
2.37967,
1.42976,
0.661865,
0.169212,
-3.69157e-13,
0.168915,
0.652717,
1.39202,
2.29918,
3.2676,
4.18329,
4.93831,
5.4441,
5.64116,
5.49,
5.02702,
4.31783,
3.4608,
2.57494,
1.59182,
0.734729,
0.186858,
-3.69157e-13



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
-3.33551e-13,
0.201939,
0.772123,
1.62619,
2.64828,
3.70597,
4.66847,
5.42247,
5.885,
6.01273,
5.80327,
5.29811,
4.57487,
3.73631,
2.6974,
1.58328,
0.732856,
0.187384,
-3.14245e-13,
0.187183,
0.723911,
1.54532,
2.55513,
3.63519,
4.65922,
5.50633,
6.07686,
6.30686,
6.14659,
5.63784,
4.85339,
3.90211,
2.91782,
1.77428,
0.818882,
0.208234,
-3.33551e-13



};

   TGraph *total_3 = new TGraph(n_3,x_3,y_3);
   	total_3->SetLineColor(4);
   	total_3->SetLineWidth(2);
	//total_3->SetLineStyle(7);
   	total_3->Draw("C same");

  /* Draw horizontal lines   */
    c1->Update();
    TLine *l1 = new TLine(c1->GetUxmin(), 4, c1->GetUxmax(), 4);
    l1->SetLineColor(1);
    l1->SetLineWidth(1);
    l1->Draw("L SAME");
    //TLine *l2 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    //l2->SetLineColor(2);
    //l2->Draw("L SAME");
/*    TLine *l3 = new TLine(c1->GetUxmin(), 11, c1->GetUxmax(), 11);
    l3->SetLineColor(4);
    l3->Draw("L SAME");
    TLine *l4 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l4->SetLineColor(4);
    l4->Draw("L SAME");
*/
    TLegend * pleg = new TLegend(0.2,0.75,0.3,0.85);
    pleg -> AddEntry( l1 , "2#sigma" ,"l");
    //pleg -> AddEntry( l2 , "3#sigma" ,"l");
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



    gPad->Print("nova_sensitivity.pdf");//pdf format

}

