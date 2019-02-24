#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int vector[]={4,3,5,6,7,9,10,1,2,8};
	int x,y,aux;
	
	for(int j=0;j<10;j++){
		for(int i=0;i<10;i++){
			
			if(vector[i] > vector[i+1] ){
				
				aux = vector[i];//p0=4
				vector[i] = vector[i+1];//p0=3
				vector[i+1] = aux;//p1=4
			}
		}
	}
	
	for(int i=0;i<10;i++){
		
		cout<<"Vector en orden ascendente: "<<vector[i]<<endl;
		
	}
	cout<<"\n";
	
	for(int i=9;i>=0;i--){
		
		cout<<"Vector en orden descendente: "<<vector[i]<<endl;
		
	}
	

	getch();
	return 0;
}
