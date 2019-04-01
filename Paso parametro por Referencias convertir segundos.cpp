#include<iostream>
#include<conio.h>
using namespace std;

int tiempo, horas, minutos, segundos;
void totalseg(int&, int&, int&, int&);

int main(){
	
	cout<<"Indique los segundo a convertir: "; cin>>tiempo;
	
	totalseg(tiempo, horas, minutos, segundos);
	
	cout<<"Equivale a: "<<horas<<" horas"<<endl;	
	cout<<"Equivale a: "<<minutos<<" minutos"<<endl;	
	cout<<"Equivale a: "<<segundos<<" segundos"<<endl;	
		
	getch();
	return 0;
}

	void totalseg(int& tiempo,int& horas,int& minutos,int& segundos){
		
		horas = (tiempo/60)/60; 
		tiempo %= 3600;
		minutos = tiempo/60;
		segundos = tiempo%60 ;
		
	}

