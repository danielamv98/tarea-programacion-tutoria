//ejercicio 27 hacer un programa que calcule el resultado de la siguiente exprecion : 1-2+3-4+5-6...n//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int nTotal, resultado=0;
	
	cout<<"Digite el total de elementos: ";
	cin>>nTotal;
	
	for(int i=1; i<=nTotal; i++){
		if(i%2 != 0){
			resultado+=i;
		} else{
			resultado-=i;
		}
	}
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	getche();
	return 0;
}


