#include<iostream>
#include<cstdlib>

//Comportamiento de DOUBLE - UNDER:1075 - OVER:1024 
int main(int argc, char **argv)
{
  typedef double REAL; 
  REAL under=1.0;
  REAL over=1.0;
  
  int n=std::atoi(argv[1]);

  for(int i = 1; i <= n; i += 1){
    under= under/2.0;
    over = over*2.0;
    std::cout<< "under " << i << ": " << under << "  - over "<< i << ": "<<  over <<std::endl;
  }
return 0;
}
