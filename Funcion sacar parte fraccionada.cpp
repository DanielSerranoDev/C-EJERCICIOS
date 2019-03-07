#include<iostream>
using namespace std;

void pedirDatos();
float numero;
float parteFracionada(float n);

int main(){
	
	pedirDatos();
	//parteFracionada(float n);
	cout<<parteFracionada(numero);
	
	return 0;
}

void pedirDatos(){
	
	
	cout<<"Indroduce valor decimal: ";
	cin>>numero;
	
	
}

float parteFracionada(float n){
	
	int entero = n;
	float resultado = numero - entero;
		
	return resultado;	
}
