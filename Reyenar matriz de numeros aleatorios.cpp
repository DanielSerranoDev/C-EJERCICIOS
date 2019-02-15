/*

MATRIZ QUE SOLICITO TAMAÑO DE FILAS Y COLUMNAS Y LO REYENO CON NUMEROS ALEATORIOS

*/
#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	//DECLARO LA MATRIZ Y LAS VARIABLES
	
	int matriz[100][100],filas,columnas,num;
	srand(time(NULL));
	cout<<"Indica en numero de filas de la matriz: ";cin>>filas;
	cout<<"Indica en numero de columnas de la matriz: ";cin>>columnas;
	
	//REYENO LA MATRIZ CON NUMEROS ALEATORIOS
	
	for(int i=0;i<filas;i++)	{
		for(int j=0;j<columnas;j++){
			
			num=1+rand()%(100);
			matriz[i][j]=num;
		}
		
	}	
	
	//LEO LA MATRIZ CON LOS NUMEROS ALEATORIOS
	
	for(int i=0;i<filas;i++)	{
		for(int j=0;j<columnas;j++){	
		
	cout<<matriz[i][j]<<" ";	
		}
	cout<<"\n";
	}
	
	getch();
	return 0;
}
