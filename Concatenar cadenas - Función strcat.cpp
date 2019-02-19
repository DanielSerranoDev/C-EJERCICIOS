#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase1[100]={"Daniel: hola que tal "};
	char frase2[100]={"Sahar: Yo muy bien"};
	char frase3[100];
	
	//PRIMERO GUARDARMOS FRASE-1 EN FRASE-3
	strcpy(frase3,frase1);
	
	//DESPUES CONCATENAMOS EN FRASE-3 FRASE-1 Y FRASE-2
	strcat(frase3,frase2);
	
	cout<<frase3;
	
	
	getch();
	return 0;
}
