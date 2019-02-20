/**Pasar palabra a mayuscula */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char palabra[50];
	
	cout<<"Indique una palabra a convertir a mayuscula: ";
	cin.getline(palabra,50,'\n');
	strupr(palabra);
	cout<<"La palabra -"<<palabra<<"- fue convertida a mayusculas";
	
	
	
	getch();
	return 0;
	
}
