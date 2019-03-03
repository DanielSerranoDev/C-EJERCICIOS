/*Busqueda secuencial*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int vector[]={3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato= 4;
	//Busqueda secuencial
	i=0;
	while((band == 'F') && (i<5)){
		if(vector[i] == dato){
			band = 'V';
						
		}
		i++;
	}
	
	if(band == 'F'){
		
		cout<<"El numero a buscar no existe en el arreglo ";
		
	}
	else if(band == 'V'){
		
		cout<<"El numero a buscar se ha encontradoo en la posicion "<<i-1;
		
	}
	
	
	getch();
	return 0;
}
