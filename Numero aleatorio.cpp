/*

COMO GENERAR UN NUMERO ALEATORIO Y SOLICITO NUMEROS PARA ACERTAR, INDICA NºINTENTOS
*/
#include<iostream>
using namespace std;
#include<stdlib.h>//NECESARIA PARA LOS ALEATORIOS
#include<time.h>//ESTA ES LA MATRIZ DEL TIEMPO NECESARIA PARA LOS ALEATORIOS


int main(){
	
	int numero,aleatorio,contador = 0;
	//COMANDO
	srand(time(NULL));
	
	//VARIABLE ALEATORIO LO REYENO CON NUMEROS DEL 1 AL 100
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
