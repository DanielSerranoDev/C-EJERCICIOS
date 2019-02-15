#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	int matriz[100][100],filas,columnas,num;
	srand(time(NULL));
	cout<<"Indica en numero de filas de la matriz: ";cin>>filas;
	cout<<"Indica en numero de columnas de la matriz: ";cin>>columnas;
	
	for(int i=0;i<filas;i++)	{
		for(int j=0;j<columnas;j++){
			
			num=1+rand()%(100);
			matriz[i][j]=num;
		}
		
	}	
	
	for(int i=0;i<filas;i++)	{
		for(int j=0;j<columnas;j++){	
		
	cout<<matriz[i][j]<<" ";	
		}
	cout<<"\n";
	}
	
	getch();
	return 0;
}
