#include<iostream>
#include<cstdlib>
#include<cmath>

double dump_seno_fun(double X, int N);
void smart_seno_fun(void);
int factorial(int n);


int factorial(int n)
{
  if (n<=0) return 1;
  return n*factorial(n-1);
}


double dump_seno_fun(double X, int N)
{
  double sum=0.0, term=0.0;
  for (int k=1;k<=N;k+=1)
    {
      term = pow(-1,k-1)*pow(X,2*k-1)/factorial(2*k-1);
      sum += term;
    }

}


int main ()
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double X=0.5;
  int NMAX=20;
  
  for (int i=1;i<=NMAX;i+=1)
    {
      std::cout<<i<<"\t"<<dump_seno_fun(X,i)<<"\t"<< fabs(dump_seno_fun(X,i)-std::sin(-X))/std::sin(-X) <<std::endl;
    }
  return 0;
  
}
