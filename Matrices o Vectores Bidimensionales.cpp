
/*
HAGO MATRIZ BIDIMENSIONAL SOLICITANDO AL USUARIO NUMERO DE FILAS Y COLUMNAS
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int vector[100][100],filas=0,columnas=0;
	
	cout<<"Indica cuantas filas quieres: "; cin>>filas;
	cout<<"Indica cuantas filas columnas: "; cin>>columnas;
	
	//Almacenando elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		cout<<"Introduce valor ["<<i<<"]["<<j<<"]": ;
		cin>>vector[i][j];
		}
	}
	
	//Mostrando la matriz
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		cout<<vector[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
