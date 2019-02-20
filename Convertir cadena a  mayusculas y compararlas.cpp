/**Pasar palabra a mayuscula */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase[50];
	char frase2[50];
	
	cout<<"Indique una frase: ";
	cin.getline(frase,50,'\n');
	cout<<"Indique una segunda frase: ";
	cin.getline(frase2,50,'\n');
	
	strupr(frase);
	strupr(frase2);
	
	if(strcmp(frase,frase2)==0){
		
		cout<<frase<<"\n"<<frase2<<"\n fueron convertidas a mayusculas y son iguales";
		
	}else{
		
		cout<<frase<<"\n"<<frase2<<"\n fueron convertidas a mayusculas y NO son iguales";
	}
	
	
	
	
	
	getch();
	return 0;
	
}
