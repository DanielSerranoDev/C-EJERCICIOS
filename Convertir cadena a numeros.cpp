
#include<iostream>
#include<conio.h>
#include<stdlib.h>// 
using namespace std;

int main(){
	
	int cad[]={123};
	char cad2[]="123";
	int numero,resultado=0; 
	

	numero = atoi(cad2);
	
	resultado=cad[0]+numero;
	
	cout<<resultado<<endl;

	
	getch();
	return 0;
}
