#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
	
	
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matriz3[100][100];
	int cuadrado=0,suma=0;

	//Leo la matriz normal
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				cout<<matriz[i][j]<<" ";
				cout<<matriz2[i][j]<<" ";
			}
			cout<<"\n";
		}



	//Calculo el cuadrado de la matriz
	
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				cuadrado = pow(matriz[i][j],2);
				matriz[i][j]=cuadrado;
				cuadrado = pow(matriz2[i][j],2);
				matriz2[i][j]=cuadrado;
			}
			
		}

	//Leo la matriz resuelta
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				suma=matriz[i][j]+matriz2[i][j];
				matriz3[i][j]=suma;
				cout<<matriz3[i][j]<<" ";
				
			}
			cout<<"\n";
		}
	getch();
	return 0;	
}
