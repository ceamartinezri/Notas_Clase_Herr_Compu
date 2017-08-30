#include<iostream>
#include<Eigen/Dense>
#include<Eigen/Core>
#include<cmath>
using Eigen::MatrixXd;
//using namespace Eigen;

int main ()
{
  //  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  std::cout <<"EIGEN_MAYOR_VERSION" <<std::endl;
  std::cout <<"EIGEN_MINOR_VERSION" <<std::endl;
  MatrixXd m(2,2);
  m(0,0)=3;
  m(1,0)=2,5;
  m(0,1)=-1;
  m(1,1)=m(1,0)+m(0,1);
  std::cout << m << std::endl;
    
  return 0;
}
