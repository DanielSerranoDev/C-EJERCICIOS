//Ordenar por insercion
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int vector[]={5,6,8,1,2};
	int i,pos,aux;
	
	for(i=0;i<5;i++){
		pos = i;//0
		aux = vector[i];//5
		while((pos>0) && (vector[pos-1]>aux)){ //
			vector[pos]= vector[pos-1];
	
			pos--;
		}	
		vector[pos]=aux;
	}

	cout<<"Orden ascedente"<<endl;
	
	for(i=0;i<5;i++){
		
		cout<<vector[i];
	}
	
		cout<<"\nOrden descendente"<<endl;
	
	for(i=4;i>=0;i--){
		
		cout<<vector[i];
	}

	getch();
	return 0;
}
