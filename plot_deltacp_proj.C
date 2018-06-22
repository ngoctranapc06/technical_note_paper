//
//  plot_deltacp_proj.C
////////////////////////////////////////////////////
//
//  To plot chisq as function of theta13 from GLoBES output
//
///////////////////////////////////////////////////
//  Created by S. Cao, cvson@utexas.edu
{
    //copy from th13delta.c, change th13_steps and delta_steps to Int_t
    /* Scan the th13-delta plane */
    double delta_lower = -180; //0.0;
    double delta_upper = 180; //2*TMath::Pi();
    Int_t delta_steps = 90;//15 is too small
    double delta_halfstep = (delta_upper-delta_lower)/(delta_steps*2);
   
    //TH2 to fill the plots
    //this is a little tricky. Think about it.
    
    //This is no of lines in the dat file
    Int_t TotalLine = (delta_steps+1);
    double *achisq = new double[TotalLine];
    double *achisq2 = new double[TotalLine];
    double *adeltacp = new double[TotalLine];
    
    // fprintf(outfile, "%g %g %g\n", this_th13*180.0/M_PI, this_delta*180.0/M_PI, res);
    ifstream cfile("deltacp_proj_wreactor.dat");
    double MinNLL=1e6;//to get the minimum value of chisq
    double MinNLL2=1e6;
    float deltacp_val, chisq_val, chisq_val2;
    for(int iline=0; iline<TotalLine; iline++){
        cfile >> deltacp_val >> chisq_val >> chisq_val2;
        //if(iline%10==0) cout<<" at th13 "<<deltacp_val<<" dcp "<<dcp_val<<" chisq "<<chisq_val<<endl;
        if(chisq_val2<MinNLL2) MinNLL2 = chisq_val2;
        if(chisq_val<MinNLL) MinNLL = chisq_val;
        //to fill 2D plots of chisq
        adeltacp[iline] = deltacp_val;
        achisq[iline] = chisq_val;
        achisq2[iline] = chisq_val2;
    }
    cout <<"The mean value of chisq is "<<MinNLL<<" and2 "<<MinNLL2<<endl; //should be close to zero
    
    //subtracting zero
    for(int iline=0; iline<TotalLine; iline++){
        achisq[iline]  -= MinNLL;
        achisq2[iline] -= MinNLL2;
    }
    
    //TGraph
    //TGraph *pchisq = new TGraph(TotalLine,adeltacp,achisq);
    TGraph *pchisq2 = new TGraph(TotalLine,adeltacp,achisq2);
    
    
    new TCanvas;
    //pchisq2->Draw("AL");
    pchisq2->SetTitle("");
    pchisq2->GetXaxis()->SetTitle("#delta_{CP}[degree]");
    pchisq2->GetYaxis()->SetTitle("#chi^{2}");
    pchisq2->SetMaximum(20);
    pchisq2->SetLineWidth(2);
    pchisq2->SetLineColor(2);
    pchisq2->Draw("AL") ;
    
  /* Draw horizontal lines   */
    c1->Update();
    TLine *l1 = new TLine(c1->GetUxmin(), 2.71, c1->GetUxmax(), 2.71);
    l1->SetLineColor(3);
    l1->Draw("L SAME");
    TLine *l2 = new TLine(c1->GetUxmin(), 4, c1->GetUxmax(), 4);
    l2->SetLineColor(4);
    l2->Draw("L SAME");
    TLine *l3 = new TLine(c1->GetUxmin(), 6.63, c1->GetUxmax(), 6.63);
    l3->SetLineColor(6);
    l3->Draw("L SAME");

    TLine *l4 = new TLine(c1->GetUxmin(), 9, c1->GetUxmax(), 9);
    l4->SetLineColor(7);
    l4->Draw("L SAME");

    TLegend * pleg = new TLegend(0.15,0.65,0.35,0.85);
    pleg -> AddEntry( l1 , "90\% C.L." ,"l");
    pleg -> AddEntry( l2 , "2#sigma C.L." ,"l");
    pleg -> AddEntry( l3 , "99\% C.L." ,"l");
    pleg -> AddEntry( l4 , "3#sigma C.L." ,"l");
    pleg -> SetFillColor(0);
    pleg -> SetBorderSize(0);
    pleg ->SetTextSize(18);
    pleg ->SetTextFont(43);
    pleg -> Draw();



    gPad->Print("deltacp_proj_wreactor.png");
    gPad->Print("deltacp_proj_wreactor.bmp");
    //to do, get 1sigma uncertainty, or precision
    //should compare with and without reactor experiment
    

    
    
}
