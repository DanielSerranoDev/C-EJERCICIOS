#include<iostream>
#include<conio.h>
using namespace std;

//PROtOtIPO DE FUNCION

template <class ARGUMENTO>
void despliegue(ARGUMENTO dato);
int dato;


int main(){
	
	int dato1 = 5;
	float dato2 = 4.5;
	double dato3 = 567.789;
	char dato4 = 'a';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);

	
	getch();
	return 0;
}

template<class ARGUMENTO>
void despliegue(ARGUMENTO dato){
	
	
	cout<<"El dato es: "<<dato<<endl;
	
	
	//return numero;
	
}
