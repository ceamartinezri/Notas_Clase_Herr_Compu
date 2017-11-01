#include <iostream>

int  main (void)
{
  const int N= 7000, M=500;
  double data [N][M]={{0.0}};

  std::cout << data [N/2][M/2]<< std::endl;
 
  return 0;
}
