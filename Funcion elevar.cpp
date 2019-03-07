#include<iostream>
#include<math.h>
using namespace std;

void pedirNumero();
void funpot(int x, int y);

int numero, elevacion;

int main(){
	
	pedirNumero();
	funpot(numero,elevacion);
	
	return 0;
}

void pedirNumero(){

	do{
	
		cout<<"\nIndique un valor: ";
		cin>>numero;
	
		if(numero>1){
			
		}else{
			
			cout<<"El numero debe ser positivo"<<endl;
		}
			
	}while(numero<1);
	
	do{
	
		cout<<"A cuanto quieres elevarlo: ";
		cin>>elevacion;
		
		if(elevacion>1){
			
			}else{
				
				cout<<"\n El numero debe ser positivo"<<endl;
			}
		
	}while(elevacion<1);
	
}

void funpot(int x, int y){
	long resultado;
	
	resultado = pow(numero,elevacion);
	
	cout<<"\n El numero "<<numero<<" fue elevado a "<<elevacion<<" y su resultado fue "<<resultado;
	

}
