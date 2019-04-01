// Paso de parametro por Referencia

#include<iostream>
#include<conio.h>
using namespace std;

void valNuevo(int&, int&);

int main(){
	
	int num1,num2;
	
	cout<<"Indique dos numeros: ";cin>>num1>>num2;
	
	valNuevo(num1,num2);
	
	cout<<"El nuevo valor para primer numero es: "<<num1<<endl;
	cout<<"El nuevo valor para segundo numero es: "<<num2<<endl;
	
	
	getch();
	return 0;
}

void valNuevo(int& xnum, int& ynum){
	
	
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
	
	xnum= 55;
	ynum= 63; 
	
}
