/*Plantillas de funcion

template <class TIPOD>
void valorabsoluto(TIPOD numero){

Sacar el valor absoluto de un número */

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de la funcion;

template <class TIPOD>
void valorabsoluto(TIPOD numero);

int valor1,valor2,resultado;


int main(){
	
	cout<<"Introduce primer valor: "; cin>>valor1;
	cout<<"Introduce segundo valor: "; cin>>valor2;


		valorabsoluto(resultado);
	
	cout<<"El valor absoluto es: "<<resultado;
	
	return 0;
}

template <class TIPOD>
void valorabsoluto(TIPOD numero){
	
	if(valor1>0 && valor2 >0){
		
	resultado = (valor1 - valor2)*-1;	
		
	}else{
	
	
	if(valor1<0){
		
		valor1*= -1;
	}
	
		if(valor2<0){
		
		valor2*= -1;
	}
	
	resultado = valor1 + valor2;
	}
}
