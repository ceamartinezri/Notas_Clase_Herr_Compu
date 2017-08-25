#include "1.h"

int main (void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  double areadump, areasmart;
  double a,b=3,c=4;
  double pi, theta;
  //double theta=((pi/2)*pow(1.1,n));
  //  double a=sqrt((b*b)+(c*c)-2*cos(theta));
  double diferencia;
  for(int n = 0; n <= 100; n += 1){

    theta=((M_PI/2.0)*std::pow(1.1,-n));
    a=sqrt((b*b)+(c*c)-2*b*c*cos(theta));

    areadump=dump_heron_fun(a,b,c)  ;
    areasmart=smart_heron_fun(a,b,c)  ;
    diferencia= fabs(areasmart-areadump)/areasmart;
    
    std::cout<< n<<"\t"<<areadump << "\t" <<areasmart<< "\t"<<diferencia<< std::endl;
    
  }


  
  areadump=dump_heron_fun(a,b,c)  ;
  areasmart=smart_heron_fun(a,b,c)  ;
  std:: cout<< "El area con dump Heron Funtion es: " << areadump <<std::endl;
  std:: cout<< "El area con smart Heron Funtion es: " << areasmart <<std::endl;   
return 0;
}
