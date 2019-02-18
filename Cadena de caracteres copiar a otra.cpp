#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frases[100];  
	int largo = 0;
	cout<<"Indica frase a guardar en la variable: "<<endl;
	
	
	//Captura la cadena de caracteres en la variable frases
	cin.getline(frases,100,'\n');
	
	cout<<"Ahora la vamos a pasar a otra variable"<<endl;
	
	//Cuento la longitud para que el comando strlen calcule para crear una variable justo por el tamaño que es la anterior
	largo = strlen(frases);
	char frases2[largo];
	
	//Comando para copiar primero destino/origen
	strcpy(frases2,frases);
	
	cout<<"Hemos traspasado la variable: "<<frases2<<endl;
	
	
	getch();
	return 0;
}
