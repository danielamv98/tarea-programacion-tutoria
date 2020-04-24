//ejercicio 29  Realice un programa que calcule la descomposicion en factores primos de un numero entero//
#include<iostream>
using namespace std;
int main(){
 int i=2,cociente, numero;
 
 cout<<"Este programa descompone el numero que digitas en sus factores primos,veamos: "<<endl;
 
 
 do{
  cout<<"\nIntroduzca un numero entero positivo: "; cin>>numero;
  if(numero<0 or numero==0){
   cout<<"\n\nUN NUMERO ENTERO POSITIVO... "<<endl;
  }
 }while(numero<0 or numero==0);
 
 for( i=2;i<=numero;i++){
  
  do{
  
      if(numero%i==0){
          
    cociente=(numero/i);
    numero=cociente;
    cout<<i<<" * ";
      }
      
     }while(numero%i==0);
 
  }  
  cout<<"Estos son todos los factores primos de tu numero. "<<endl; 
    
 system("pause");
 return 0;
}
