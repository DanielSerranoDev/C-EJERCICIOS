/*Determinar si una palabra es polindroma osea que se le igual del reves*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase[100];
	char alreves[100];
	cout<<"Indica una palabra para ver si es polindroma: "<<endl;
	cin.getline(frase,100,'\n');
	strcpy(alreves,frase);
	strrev(alreves);
	if(strcmp(frase,alreves)==0){
		
		cout<<"La palabra es polidroma";
	}else{
		
		cout<<"La palabra NO es polidroma";
	}
	
	
	getch();
	return 0;
}
