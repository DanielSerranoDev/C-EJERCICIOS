#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}},num=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
		cout<<matriz[j][i]<<" ";
					
		}
	cout<<"\n";
	}


	getch();
	return 0;
}
