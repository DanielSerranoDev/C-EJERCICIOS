#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matrizfinal[3][3];
	int producto=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		producto=matriz1[i][j]*matriz2[i][j];
		matrizfinal[i][j]=producto;
		}	
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
	
		cout<<"El producto de matriz["<<i<<"]["<<j<<"] es :"<<matrizfinal[i][j]<<endl;
		}	
	}
	
	
	
	getch();
	return 0;
}
