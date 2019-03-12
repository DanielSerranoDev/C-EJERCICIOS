#include<iostream>
#include<conio.h>
using namespace std;

template <class ARGUMENTO>
ARGUMENTO maximo(ARGUMENTO dato1, ARGUMENTO dato2, ARGUMENTO dato3);


int main(){
	
	int dato1 = 4, dato2 = 50, dato3 = 8;
	
	cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3)<<endl;
	
	getch();
	return 0;
}

template <class ARGUMENTO>
 ARGUMENTO maximo(ARGUMENTO dato1, ARGUMENTO dato2, ARGUMENTO dato3){
	
	ARGUMENTO max;
	
	if ((dato1 >= dato2) && (dato1 >= dato3)){
		
		max = dato1;
	}
	else{
		
		if ((dato2 >= dato1) && (dato2 >= dato3)){
			
		max = dato2;
			
		}
		else{
			
		max = dato3;
			
		}
		
		
	}


	return max;
	
}
