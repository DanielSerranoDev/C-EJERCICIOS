/*TIPOS DE FUNCIONES*/

//1º CASO RECIBE VALORES Y RETORNA VALOR
#include<iostream>
#include<conio.h>
using namespace std;


int suma(int x, int y);
int a,b,resultado;

int main(){
		
	cout<<"Indica un primer valor: "; cin>>a;
	cout<<"Indica un segundo valor: "; cin>>b;
	
	//Aqui llamamos a la funcion y le asingamos que "x" es "a" y que "y" va ser "b", luego ejecuta la operación. Tienen que ir en orden.
	resultado= suma(a,b);
	
	cout<<"El resultado de la suma es : "<<resultado;
		
	getch();
	return 0;
}


int suma(int x, int y){
		
	
	return x+y;
}
