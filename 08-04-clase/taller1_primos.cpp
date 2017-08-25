#include<iostream>

//funcion para evaluar si el numero es primo o no 
bool primo_fun (int num)
{
int cdiv=1,cmod=1; 
while(cdiv<=5){
	if ((num%cdiv)==0){
	cmod++;
	}   
	cdiv++;
}

if (cmod==2)
	return true;	
	//std::cout << num << " SI Es primo" << std::endl;
else
	return false; 
	//std::cout << num << " NO Es primo" << std::endl;
}


//PROGRAMA PRINCIPAL
int main(void) 
{
//int p=171;
int lim_inf = 500; //limite inferior
int lim_sup = 1400; //limite superior

// imprime los numeros primos entre limite inferior y limite superior
for(int p = lim_inf; p <= lim_sup; p++){
if (primo_fun(p))
	std::cout << p << std::endl; 
	//std::cout << p << " Si es primo"<< std::endl;
//else
//	std::cout << p << " NO es primo"<< std::endl;
}
return (0);
}



