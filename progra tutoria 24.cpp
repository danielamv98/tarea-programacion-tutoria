//ejercicio 24 Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos//
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 int x, y, potencia = 1;
 
 cout<<"\tCalcular la potencia de un numero (x^y).\n\n";
 
 cout<<"Ingrese un valor positivo para la base (x): ";
 cin>>x;
 cout<<"Ingrese un valor positivo para el exponente (y): ";
 cin>>y;
 
 if((x >= 0) && (y >= 0)){
  for(int i=1; i<=y; i++){
   potencia = potencia * x;
  }
  
  cout<<"\nEl resultado de la potencia es: "<<potencia<<endl;
 }
 else{
  cout<<"\nIncorrecto, ingrese valores positivos."<<endl;
 }
 
 getch();
 return 0;
}
