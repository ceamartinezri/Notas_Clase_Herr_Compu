#include <iostream>
#include <vector>


//Constantes
double delta=0.1; // Xmax=0.0, Ymax=0.0;
const double L = 1.479;
const int N= int(L/delta)+1;

typedef std::vector<double> Matrix;
void initial_conditions (Matrix & m);
void print(const Matrix & m);
void boundary_conditions(Matrix & m);
void evolved(const Matrix & m);


int  main (void)
{
  Matrix espacio(N*N);  
  initial_conditions(espacio);
  boundary_conditions(espacio);
  print(espacio);

  
  return 0;
}

void initial_conditions (Matrix & m)
{
  //const int size=std::sqrt(m.size());
  for (int i=0; i<N;++i)
    for (int j=0; j<N;++j)
      m[i*N+j]=0.0;
    
}

void boundary_conditions(Matrix & m)
{
  int i =0, j=0;

  i=0;
  for (j=0;j<N;++j)
    m[i*N+j]=100;

  i=N-1;
  for (j=0;j<N;++j)
    m[i*N+j]=0;

  
  j=0;
  for (i=1;i<N-1;++i)
    m[i*N+j]=0;


  j=N-1;
  for (i=1;i<N;++i)
    m[i*N+j]=00;
    
}

void print (const Matrix & m)
{
  
  for (int i=0; i<N;++i){
    for (int j=0; j<N;++j){
      //std::cout <<m[i*N+j]<<" ";
      std::cout << i*delta<<" "
		<< j*delta<<" "
		<<m[i*N+j]<<"\n";
      
    }
  std::cout <<"\n";
  }
}

void evolved (const Matrix & m)
{
  
  for (int i=0; i<N;++i){
    for (int j=0; j<N;++j)
      {
	if(i==0)continue;
	if(i==N-1)continue;
	if(j==0)continue;
	if(j==N-1)
	m[i*N+j]=(m[(i+1)*N+j]+
		  m[(i-1)*N+j]+
		  m[i*N+(j+1)]+
		  m[i*N+(j-1)])*0.25;
      }
  }
}
