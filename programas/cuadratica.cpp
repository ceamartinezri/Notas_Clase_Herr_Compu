#include<iostream>
#include<cstdlib>
#include<cmath>


int factorial(int n)
{
  if (n<=0) return 1;
  return n*factorial(n-1);
}

double cuadratica(double A, double B, double C)
{
  double res=0.0;
  std::cout<<A<<std::endl;
  std::cout<<B<<std::endl;
  std::cout<<C<<std::endl;
  double temp=(-4*A*C);
  std::cout<<temp<<std::endl;
 
  res=((-B)+(sqrt((B*B)-(4*A*C)))/2*A);
  
  return res;
}


double cuadratica1(double x, int N)
{
  double term=1, suma =1;
  for (int k=0;k<N;k++)
    {
      term *=(-x)/(k+1);
      suma += term;
    }
  return suma;
}



int main(int argc, char ** argv)
{
  const double a = atoi(argv[1]); 
  const double b = atoi(argv[2]); 
  const double c = atoi(argv[3]); 
    std::cout.precision(16); std::cout.setf(std::ios::scientific);

    //std::cout<<a<<std::endl;
    std::cout<<cuadratica(a,b,c)<<std::endl;

    //  for (int i=1;i<=NMAX;i+=1)
    //    {

    // std::cout<<i<<"\t"<<exponencial_fun(X,i)<<std::endl;
      //std::cout<<i<<"\t"<<fsmart(X,i)<<"\t"<< fabs(fsmart(X,i)-exp(-X))/exp(-X) <<std::endl;
      //    }
  return 0;
  
}
