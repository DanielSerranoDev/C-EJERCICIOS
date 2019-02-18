#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char palabra[100]; 
	int longitud=0;
	
	cout<<"Indica cadena de caracteres a guardar en la variable:"<<endl;
	cin.getline(palabra,100,'\n');
	
	//comando strlen(cadena de caracteres); te indica el numero entero de cuantos caracteres esta compuesta
	longitud = strlen(palabra);	
	
	cout<<"La longitud de mi cadena de carateres '"<<palabra<<"' es de "<<longitud<<" carancteres";
	
	getch();
	return 0;
}
