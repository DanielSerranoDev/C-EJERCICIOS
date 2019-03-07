#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
float numero, resultado,x;
void pedirDatos();
void calculo(float x);


int main(){
	
	pedirDatos();
	calculo(numero);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Indique valor para hayar el cuadrado: ";
	cin>>numero;
}

void calculo(float numero){
	
	
	resultado = pow(numero,2);
	cout<<"El cuadrado de "<<numero<<" es "<<resultado;
	
}
