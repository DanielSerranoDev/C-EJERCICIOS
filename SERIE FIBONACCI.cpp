#include<iostream>
using namespace std;


int main(){
	
	double x=0,y=1,z=1,numero;
	
	cout<<"Introduce maximo serie: "<<endl;
	cin>>numero;
	
	for(int i=0;i<=numero;i++){
		
		z = x+ y;
		cout<<" "<<z<<" ";
		
		x = y;
		
		y = z;	
	
	}
	
	
	
	return 0;
}
