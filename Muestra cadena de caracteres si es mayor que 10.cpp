/*

Ejercicio que muestra la cadena de caracteres si es mayor a 10 la muestra

*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase[100]; 
	int longitud=0,resto=0;
	
	cout<<"Indica cadena de caracteres a guardar en la variable:"<<endl;
	
	
	
	
	
	do{
	cin.getline(frase,100,'\n');
	longitud = strlen(frase);	
	resto=10-longitud;
		
	if(longitud>10){
		
		cout<<"La longitud de mi cadena de carateres '"<<frase<<"' es de "<<longitud<<" carancteres";
		
	}else{
		
		cout<<"No supera los 10 caracteres, por favor cumplimenta "<<resto<<" caracteres mas"<<endl;
		}
	}while(resto>0);
	
	getch();
	return 0;
}
