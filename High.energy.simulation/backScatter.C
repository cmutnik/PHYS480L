void backScatter() {

   //DAq: September 17, 2015
   //Data Na gamma gamma angular correlation experiment
   //Physics480_Lab
   //Draw a graph with error bars

   TCanvas *c1 = new TCanvas("c1","Na Test Graph", 200, 38, 700, 500);

   c1->SetGrid();  
   c1->GetFrame()->SetFillColor(21);
   c1->GetFrame()->SetBorderSize(12);

 
   const Int_t n = 38;

   //Coincidence counts
   Float_t y[n]  = {  9,  7,  2, 15, 10,  6,  9, 12, 16, 35};
		      //41, 45, 44, 52, 48, 42, 40, 55, 44, 50,
		      //43, 47, 46, 49, 40, 40, 33, 25, 28, 18,
		      //16,  9,  8, 13,  8,  4, 10, 11 };

   //Angular measurement in degrees
   Float_t x[n]  = {  90, 100, 110, 120, 130, 140, 150, 155, 160, 165};
		      // 170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
		      //190, 192, 194, 196, 198, 200, 202, 204, 206, 208,
		      //210, 215, 220, 225, 230, 240, 255, 270 };

   /*   Float_t ex[n] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 
                     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                     0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, };
   */
   //Poisson errors
   /* Float_t ey[n] = { 3.00, 2.64, 1.41, 3.87, 3.16, 2.44, 3.00, 3.46, 8.00, 5.90,
                     6.40, 6.70, 6.60, 7.20, 6.90, 6.48, 6.30, 7.41, 6.63, 7.07,
                     6.55, 6.85, 6.78, 7.00, 6.32, 6.32, 5.74, 5.00, 5.29, 4.24,
                     8.00, 3.00, 2.80, 3.60, 2.82, 2.00, 3.16, 3.30 };
   */
   //TGraphErrors *gr = new TGraphErrors(n,x,y,ex,ey);
   TGraph *gr = new TGraph (n,x,y);

   gr->SetTitle("Electron Backscattering as a Funciton of Material Thickness");

   //gr->GetXaxis()->SetTitle("Angle measurement in degrees");
   gr->GetYaxis()->SetTitle("# of electrons backscattering");
   gr->GetXaxis()->SetTitle("Material thickness (cm.)");

   gr->SetMarkerColor(4);
   gr->SetMarkerStyle(21);
   gr->Draw("AP" );

   c1->Update();
}
