#include<iostream>
//#include<cstdlib>

//Comportamiento de LONG DOUBLE - UNDER:16446 -  OVER:16384


int main()
//int main(int argc, char **argv)
{
  typedef long double REAL;
  REAL under=1.0;
  REAL over=1.0;

  //int n=std::atoi(argv[1]);
  int n=16500;

  for(int i = 1; i <= n; i += 1){
    under= under/2.0;
    over = over*2.0;
    std::cout<< "under " << i << ": " << under << "  - over "<< i << ": "<<  over <<std::endl;
  }
return 0;
}
