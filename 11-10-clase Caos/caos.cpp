#include <iostream>
#include <vector>
#include <cstdlib>

//const int N=1000;//iteraciones maximas
//const double R=2.1;

//for R in 3.6 3.8; for seed do ./a.out 200 $R > datos-$R.txt ;done
//plot for[R in "3.6 3.8"] "datos-".R.".txt" u 2:3 w p


int main (int argc, char ** argv )
{
  srand48(0.0);
  const int N = std::atoi(argv[1]);
  const double R = std::atof(argv[2]);
  const int Nj = std:: atoi(argv[3]);
  std::vector <double> X(N);
  for (int j =0 ;j<Nj;++j)
    {
      X[0]=drand48();
    }
  
  //  X[0]=0.52;
  
  for (int i=1; i<N;++i)
    {
      X[i]=R*X[i-1]*(1-X[i-1]);
    }

  
  //  for (int i=0; i<N;++i)
  //{
  //  std::cout<<i<<" "<<X[i]<<"\n";
  //}

  for (int i =N/2; i<N-1;++i)
    {
      std::cout<<i <<" "<< X[i]<<" " <<X[i+1]<<"\n";
    }
			     



  
  return 0;
}
  
