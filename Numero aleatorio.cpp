#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>


int main(){
	
	int numero,aleatorio,contador = 0;
	
	srand(time(NULL));
	
	aleatorio = 1 + rand()%(100);
	
	do{
	
		cout<<"Introduzca un numero: ";cin>>numero;
		
		if(numero>aleatorio){
			
		cout<<"Digite un numero menor\n ";	
			
			
		}else{
			
		cout<<"Digite un numero mayor\n ";		
			
		}
		contador++;	
	}while(numero != aleatorio);
	
	cout<<"Felicidades adivinaste el numero"<<aleatorio<<endl;
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	
 return 0;	
}
