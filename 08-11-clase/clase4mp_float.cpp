#include<iostream>
//Comportamiento de Presision de maquina para float
int main()
{
  float eps=1.0;
  float one=1.0;
  float c=0.0;
  int n=50;
  std::cout.precision(16);
  
  for(int i = 1; i <= n; i += 1){
    eps=eps/2.0;
    c=one + eps;
    std::cout<< "ciclo " << i << ": " << "eps:"<< eps << "  - c: "<< c <<std::endl;
    
    //    if (eps==c)
    //{break();}

    
  }
return 0;
}
