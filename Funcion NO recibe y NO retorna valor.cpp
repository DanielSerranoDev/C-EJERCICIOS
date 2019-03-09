/*TIPOS DE FUNCIONES*/

//1º CASO NO RECIBE VALORES Y NI TAMPOCO RETORNA VALOR NO/NO
#include<iostream>
#include<conio.h>
using namespace std;

void  suma();

int main(){
	
	suma();
		

	return 0;
}

void suma(){
	
	int a, b, resultado;
	cout<<"Ingrese primer valor: "; cin>>a;
	cout<<"Ingrese segundo valor: "; cin>>b;
	
	resultado = a+b;
	cout<<"El resultado de la suma es: "<<resultado;
}
