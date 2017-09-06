#include<iostream>
#include<cstdio>
#include<gsl/gsl_sf_bessel.h>

int main (void)
{//imprimir entre 0 y 10 en paso de 0,1

//double x=5.0;
//double y=gsl_sf_bessel_J0 (x);

//for (double x=0.0; x<=10.0; x+=0.01)
for (int i=0;i<=1500;i+=1)
  {
double x=i*0.01;
double y=gsl_sf_bessel_J0 (x);
std::printf ("%20.16e  %20.16e\n",x,y);
}
  return 0;
}
