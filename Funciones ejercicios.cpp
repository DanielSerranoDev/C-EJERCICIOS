/*Funcion mult()*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirdatos();
void mult(float x, float y);
float num1,num2;

int main(){
	
	pedirdatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirdatos(){
	
	cout<<"Indique 2 numeros: "; cin>>num1>>num2;
	
}


void mult(float x, float y){
	
	float multipicacion = x * y;
	
	cout<<"La multiplicacion es: "<<multipicacion<<endl;
	
}
