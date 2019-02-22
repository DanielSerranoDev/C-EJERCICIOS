#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	
char cadena[100];
int longitud=0,vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
 
cout<<"Ingrese testo a contar las vocales"<<endl;
cin.getline(cadena,100,'\n');
longitud= strlen(cadena);

	for(int i=0;i<longitud; i++){
		
		switch(cadena[i]){
			case'a': vocal_a++; break;
			case'e': vocal_e++; break;
			case'i': vocal_i++; break;
			case'o': vocal_o++; break;
			case'u': vocal_u++; break;
		}
	}

	cout<<"La palabra "<<cadena<<" tiene "<<vocal_a<<" -a"<<endl;
	cout<<"La palabra "<<cadena<<" tiene "<<vocal_e<<" -e"<<endl;
	cout<<"La palabra "<<cadena<<" tiene "<<vocal_i<<" -i"<<endl;
	cout<<"La palabra "<<cadena<<" tiene "<<vocal_o<<" -o"<<endl;
	cout<<"La palabra "<<cadena<<" tiene "<<vocal_u<<" -u"<<endl;
	
	getch();
	return 0;

}
