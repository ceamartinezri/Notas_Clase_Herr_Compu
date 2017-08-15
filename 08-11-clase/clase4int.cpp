#include<iostream>
//Comportamiento de punto Flotante - FLoat XS
int main()
{
  int under=1;
  int over=1;
  
  int n=10000;

  for(int i = 1; i <= n; i += 1){

    under= under-100;
    over = over+100;
    std::cout<< "under " << i << ": " << under << "  - over "<< i << ": "<<  over <<std::endl;
  }
return 0;
}
