#include <iostream>

int  main (void)
{
  const int N= 7000, M=500;

  double **data= nullptr;
  data =new double *[N];
    for (int ii=0; ii<N; ++ii)
      {
	data[ii]=new double [M];
      }

  std::cout << data [N/2][M/2]<< std::endl;

  
  for (int ii=0; ii<N; ++ii)
      {
       delete [] data [ii];
      }
  delete [] data;
 
  return 0;
}
