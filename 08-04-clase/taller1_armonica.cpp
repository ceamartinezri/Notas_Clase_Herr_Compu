#include<iostream>
#include<fstream>

//Funcion que retorna el valor de la sumatoria hasta numero n
double armonica_fun(int n){
  double suma = 0.0;
  for(double i = 1.0; i <= n; i += 1.0){
    suma += 1.0 / i;
  }

  return suma;
}


//PROGRAMA PRINCIPAL
int main(void)
{
int N = 100; //limite sumatoria N

// imprime la serie armonica hasta N
for(int n = 1; n <= N; n++){
	std::cout << n << ": " << armonica_fun(n) <<std::endl;
	}
 return (0);
}
