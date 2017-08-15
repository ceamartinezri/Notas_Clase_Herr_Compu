#include<iostream>
//Comportamiento de Presision de maquina para float
int main()
{
  
  long double eps=1.0;
  long double one=1.0;
  
  int n=100;
  std::cout.precision(32);
  
  for(int i = 1; i <= n; i += 1){
    eps=eps/2.0;
    one=1.+eps;
    std::cout<< i <<"\t"<< eps<< "\t" << one<< std::endl;
    
  }
return 0;
}
