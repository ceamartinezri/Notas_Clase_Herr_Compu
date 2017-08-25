#include<iostream>

//Funcion que retorna el valor de la sumatoria hasta numero n
double armonica_fun(int n){

double suma = 0.0;
for(double i = 1.0; i <= n; i += 1.0){
	suma += 1.0 / i;
	std::cout << i << ": " << suma <<std::endl;
}
return suma;
}


//PROGRAMA PRINCIPAL
int main(void)
{
int N; //limite sumatoria N
double sum_armonica =0.0;
std::cout << "Calcular la sumatoria armonica hasta (Digite N):"; std::cin>> N;

// Llama a la funcion armonica que imprime hasta N
sum_armonica = armonica_fun(N);

std::cout << "la suma armonica hasta " << N <<" es: "<< sum_armonica << std::endl;

//for(int n = 1; n <= N; n++){
//	std::cout << n << ": " << armonica_fun(n) <<std::endl;
//	}
return (0);
}
