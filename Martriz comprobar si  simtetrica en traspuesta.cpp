#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int matriz[100][100],filas,columnas;
	char band='F';
	
	cout<<"Indicanumero de filas: ";cin>>filas;
	cout<<"Indicanumero de columnas: ";cin>>columnas;
	
	if(filas==columnas){
	
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			
			cout<<"Indica valor para ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
			
		}
	}
	
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				
				if(matriz[i][j]==matriz[j][i])
				band='V';
			}
			
		}
	}
	
	if(band=='V'){
		
		cout<<"La matriz es simetrica ";
	
	}else{
				
		cout<<"La matriz no es simetrica ";
		}
	}else{
		
		cout<<"La matriz tiene que tener mismo numero de filas y columnas para ser simetrica";
	}
	
	getch();
	return 0;
}
