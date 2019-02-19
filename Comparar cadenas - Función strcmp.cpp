//Comparar cadenas - Funcion strcmp()
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	int tama=100,cmp;
	char frase[tama];
	char frase2[tama];
	
	cout<<"Indica frase: ";
	cin.getline(frase,tama,'\n');
	
	cout<<"Indica segunda frase : ";
	cin.getline(frase2,tama,'\n');
	
	// Es el comando que compara y si es igual da 0 si no daria -1
	cmp = strcmp(frase,frase2);
	
	if(cmp==0){
		
	cout<<"Es igual";	
		
	}else{
		
		cout<<"No es igual";
	}
	
	
	getch();	
	return 0;
}
