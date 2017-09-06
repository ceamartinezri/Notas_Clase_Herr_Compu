#include<iostream>
#include<Eigen/Dense>
//#include<Eigen/Core>
//#include<cmath>
//using Eigen::MatrixXd;
//using namespace Eigen;

int main ()
{
  //  std::cout.precision(16); std::cout.setf(std::ios::scientific);


  Eigen:: MatrixXd m = Eigen::MatrixXd::Random(3,3);
  m = (m + Eigen::MatrixXd::Constant(3,3,1.2))*50;
  std:: cout << "m =" << std::endl << m << std::endl;
  Eigen::VectorXd v(3);
  v<< 1, 2, 3;
  std::cout <<"m * v" << std::endl << m*v << std::endl;

  
  //std::cout << m << std::endl;
    
  return 0;
}
