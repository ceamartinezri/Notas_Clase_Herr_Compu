#include<iostream>
#include<cstdlib>
#include<cmath>

double dump_seno_fun(double X, int N);
void smart_seno_fun(void);
double factorial(int n);


double factorial(int n)
{
  double  factorial =1.0;
  for (int i = 1; i<=n; i++)
    {
      factorial *= i; 
    }
  //  if (n<=0) return 1;
  //  return n*factorial(n-1);
  return factorial;
}


double dump_seno_fun(double X, int N)
{
  double sum=0.0, term=0.0;
  for (int k=1;k<=N;k++)
    {
      term = (pow(-1,k-1)*pow(X,2*k-1))/factorial(2*k-1);
      sum += term;
    }
  return sum;
}


double smart_seno_fun(double X, int N)
{
  double sum=X, term=X;
  
  for (int k =1;k<=N;k++)
    {
      term *= -std::pow(X,2)/((2*k)*(2*k+1));
      sum+=term;
      
    }
  return sum;
}


int main ()
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double X=6.5;
  int NMAX=50;
  
  for (int i=1;i<=NMAX;i++)
    {
      //std::cout<<i<<"\t"<<dump_seno_fun(X,i)<<"\t"<< std::fabs(dump_seno_fun(X,i)-std::sin(X))/std::fabs(std::sin(X)) <<std::endl;
   std::cout<<i<<"\t"<<smart_seno_fun(X,i)<<"\t"<< std::fabs(smart_seno_fun(X,i)-std::sin(X))/std::fabs(std::sin(X)) <<std::endl;
    }
  return 0;
  
}
