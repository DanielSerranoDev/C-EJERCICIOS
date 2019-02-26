#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int vector[]={3,2,4,5,1};
	
	int i,j,aux,min;
	
	for(i =0; i<5; i++){
		min = i;
		for(j=i+1; j<5; j++){
			
			if (vector[j] < vector[min]){
				
			min = j;
				
			}
		}
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}
	
	cout<<"Orden ascendente"<<endl;
	
	for(i=0; i<5; i++){
		
		cout<<vector[i]<<" ";
	}
	
		cout<<"Orden descendente"<<endl;
	
	for(i=4; i>=0; i--){
		
		cout<<vector[i]<<" ";
	}
	
	getch();
	return 0;
}
