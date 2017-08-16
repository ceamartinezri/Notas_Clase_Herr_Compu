#include<iostream>
#include<cstdlib>
#include<cmath>



int factorial(int n)
{
  if (n<=0) return 1;
  return n*factorial(n-1);
}

double exponencial_fun (double X, int N)
{
  double sum=0.0, term=0.0;
  
   for (int k=0; k<=N; k+=1)
    {
      term = pow(-1,k)*pow(X,k)/factorial(k);
      sum += term;
    }
  return sum;
}


double fsmart(double x, int N)
{
  double term=1, suma =1;
  for (int k=0;k<N;k++)
    {
      term *=(-x)/(k+1);
      suma += term;
    }
  return suma;
}


int main ()
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double X=1.2;
  int NMAX=100;
  exponencial_fun(X,NMAX);

  for (int i=1;i<=NMAX;i+=1)
    {
      // std::cout<<i<<"\t"<<exponencial_fun(X,i)<<std::endl;
      std::cout<<i<<"\t"<<fsmart(X,i)<<"\t"<< fabs(fsmart(X,i)-exp(-X))/exp(-X) <<std::endl;
    }
  return 0;
  
}
