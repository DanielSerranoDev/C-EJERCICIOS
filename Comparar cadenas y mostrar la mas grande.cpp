#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase[100];
	char frase2[100];
	
	cout<<"Indica una frase a comparar: ";
	cin.getline(frase,100,'\n');
		cout<<"Indica una segunda frase a comparar: ";
	cin.getline(frase2,100,'\n');
	
	
	
	if(strcmp(frase,frase2)==0){
		
		cout<<"Son iguales ";
				
	}else{
		
		if(strlen(frase)>strlen(frase2)){
			
			cout<<"Es mas grande: "<<frase;
		}else{
			
			cout<<"Es mas grande: "<<frase2;
			
		}
		
	}
	
	getch();
	return 0;
}
