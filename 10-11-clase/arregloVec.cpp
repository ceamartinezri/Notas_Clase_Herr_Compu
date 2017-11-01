//Usando Arreglos Unidimiensionales que grantizan toda la memoria continua y menos codigo
#include <iostream>
#include <vector>

int  main (void)
{
  const int N= 7000, M=500;
  std::vector<double>data;
  data.resize (N*M);

   
  //[id][jd] -> [id*M  + id] 
  std::cout << data [N*M/2 + M/2]<< std::endl;
  // std::cout << data.at[N*M/2 + M/2]<< std::endl;
 
  return 0;
}
