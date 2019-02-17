/*
CADENA DE CARACTERES
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	
	cout<<"********PRIMERA PARTE ASIGNADO SIN PEDIR************"<<endl<<endl;
	
	char palabra[]="Daniel";
	char palabra2[]={'D','a','n','i','e','l'};
	char nombre[30];
	char nombre2[30];
	char nombre3[30];
	
	
	cout<<palabra<<endl<<endl;
	cout<<palabra2<<endl<<endl;
	

	cout<<"********SEGUNDA PARTE DE PORQUE NO UTILIZAR ""comando CIN" "************"<<endl<<endl;
	
	cout<<"Indique su nombre y apellido: ";
	cin>>nombre;
	cout<<nombre<<endl<<endl;
	cout<<"Ves solo muestra el nombre, cuando encuenta espacio para de leer"<<endl<<endl;
	

	
	cout<<"********TERCERA PARTE PORQUE UTILIZAR ""comando gets(nombre2)" "************"<<endl<<endl;
	
	cout<<"Indique su nombre y apellido otra vez: ";
	gets(nombre2);
	cout<<nombre2<<endl<<endl;
	cout<<"Ves muestra el nombre y apellido incluso habiendo espacio"<<endl<<endl;
	
	
		
	cout<<"**********CUARTA PARTE PORQUE UTILIZAR ""comando cin.getline(nombre3,20,'\n')" "************"<<endl<<endl;
	
	cout<<"Indique su nombre y apellido otra vez: ";
	cin.getline(nombre3,20,'\n');
	cout<<nombre3<<endl<<endl;
	cout<<"Ves muestra el nombre y apellido incluso habiendo espacio"<<endl<<endl;
	
	
	
	getch();
	return 0;
}
