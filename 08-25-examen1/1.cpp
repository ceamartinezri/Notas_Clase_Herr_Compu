//examen 1 punto 1
#include <iostream>
#include <stdlib.h>
#include<cstdlib>
#include <cmath>

double dump_heron_fun(double a,double b, double c);
double smart_heron_fun(double a,double b, double c);


//1.1

//dump funcion heron 
double dump_heron_fun(double a,double b, double c)
{
  double s;
  double d=(a+b+c)/2;
  s=sqrt(d*(d-a)*(d-b)*(d-c));// dump heron funtion
  return s; 
}

//smart funcion heron 
double smart_heron_fun(double a,double b, double c)
{
  double s;
  //double d=(a+b+c)/2;
  s=(0.25)*sqrt( (a+(b+c))*(c-(a-b))*(c+(a-b))*(a+(b-c)) );//smart heron funtion
  return s; 
}

