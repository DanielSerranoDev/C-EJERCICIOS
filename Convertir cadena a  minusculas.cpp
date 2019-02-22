#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char nombre[50];
	
	cout<<"Introduzca su nombre: "; cin.getline(nombre,50,'\n');
	
	if((nombre[0]=='A') || (nombre[0]=='a') ){
		
		//CONVIERTE A MINUSCULAS
		cout<<strlwr(nombre);
		
		
	}else{
		
		
		cout<<nombre;
	}
	
	
	
	
	
	getch();
	return 0;
	
}
