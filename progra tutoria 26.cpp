//ejercicio 26 Escriba un programa que calcule  el valor de : 1!+2!+3!+...+n!(suma facoriales)//
#include<iostream>
using namespace std;
int main()
{
 int numero, factorial, i, j, suma = 0;
 cout<<"Ingrese el numero al cual desea realizarle la suma de factoriales: ";
 cin>>numero;
 for (i=1;i<=numero;i++)
 {
  factorial = 1;
  for (j=1;j<=i;j++)
  {
   factorial = factorial * j;
  }
  suma = suma + factorial;
 }
 cout<<"La suma del factorial de "<<numero<<" es: "<<suma;
 return 0;
 
} 
