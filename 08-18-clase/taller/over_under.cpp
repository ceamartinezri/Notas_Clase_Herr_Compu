#include "over_under.h"

//Funcion Comportamiento de punto Flotante - FLoat XS
void over_under(void)
{
  float under=1.0;
  float over=1.0;
  
  int n=160;

  for(int i = 1; i <= n; i += 1){
    under= under/2.0f;
    over = over*2.0f;
    std::cout<< "under " << i << ": " << under << "  - over "<< i << ": "<<  over <<std::endl;
  }
}
