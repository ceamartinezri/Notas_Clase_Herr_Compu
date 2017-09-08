#include <iostream>
#include <eigen3/Eigen/Dense>
#include <chrono>
#include <cmath>
//#include <ctime>


double solvesystem(const int & size);

int main(int argc, char ** argv)
{
  const int N = atoi(argv[1]); // Repetitions
  const int M = atoi(argv[2]); // Matrix size
  //const int S = atoi(argv[3]); // seed
  //  srand(S);//controla generador de la semilla aleatoria para eigen

  double sum =0, sum2=0;
  double time=0;
  for (int rep = 0; rep < N; ++rep){
    srand(rep+1);//controla generador de la semilla aleatoria para eigen
    time= solvesystem(M);
    sum +=time;
    sum2+=time*time;
  }
  double mean =sum/N;
  double sigma=std::sqrt(N*(sum2/N-mean*mean)/(N-1));
  std::cout<<M*M<<"\t"<<mean<<"\t"<<sigma<<std::endl;
  
  return (0);
}


double solvesystem(const int & size)
{
  std::chrono::time_point<std::chrono::system_clock>start, end; //declaracion para medir tiempo
  Eigen::MatrixXd A = Eigen::MatrixXd::Random(size, size);
  Eigen::MatrixXd b = Eigen::MatrixXd::Random(size, 1);

  start=std::chrono::system_clock::now();//inicia medicion del tiempo
  Eigen::MatrixXd x = A.fullPivLu().solve(b); //resuelve el sistema
  end=std::chrono::system_clock::now();//termina medicion del tiempo

  std::chrono::duration<double> elapse_seconds=end-start;
  //std::time_t end_time=std::chrono::system_clock::to_time_t(end);

  // std::cout << elapsed_seconds.count() << std::endl;
  //  std::cout<<"finished computation at" <<std::ctime(&end_time)<<"enlapse time: "<<enlapse_seconds.count()<<"s\n"; //imprime todo del tempo

  
  //  std::cout <<A<<std::endl;
  //  std::cout <<b<<std::endl;
  //  double relative_error = (A*x - b).norm() / b.norm(); // norm() is L2 norm
  //  std::cout << "The relative error is:\n" << relative_error << std::endl;
  
  return elapse_seconds.count();
}
