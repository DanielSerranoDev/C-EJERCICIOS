// Paso de parametro por Referencia intercambio de dos variables
#include<iostream>
#include<conio.h>
using namespace std;

void interVariables(int&,int&);

int main(){
	int num1,num2;
	
	cout<<"Indique un valor para primer variable: ";cin>>num1;
	cout<<"Indique un valor para segunda variable: ";cin>>num2;
	
	interVariables(num1, num2);
	 
	cout<<"El valor de la primera variable es: "<<num1<<endl;
	cout<<"El valor de la segunda variable es: "<<num2<<endl;
	
	getch();
	return 0;
}


void interVariables(int& Primervar, int& SegundaVar){
	
	
	int aux; // 7
	aux = SegundaVar; // 7
	SegundaVar = Primervar; // 5
	Primervar = aux; // 7
	
	
}
