#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main(){
	
	char frase[]={"Hola que tal "};
	char user[50];
	cout<<"Indique su nombre: "<<endl;
	cin.getline(user,50,'\n');
	
	strcat(frase,user);
	cout<<frase;
	
	
	getch();
	return 0;
}
