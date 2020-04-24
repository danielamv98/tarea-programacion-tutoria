//ejercicio 23 escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura ,mas alta y la mas baja//
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
 //Variables
 
  //Temperaturas resultados
  int promedio=0,media=0,alta=0,baja=20;
     
     //Toma de temperaturas
     
     int fin,temp,pausa=4,hora=1;
     
     
 //Bucle contador de las horas
   for(int fin=0;fin<=24;fin++)
   {
    hora++;
    cout<<hora<<" ";
    
    //Condicion para entrada de temperatura
    
    if(hora == pausa)
    {
     pausa+=4;
     cout<<"Por favor ingresa la temperatura exterior en Centigrados "<<endl;cin>>temp;cout<<endl;
    
     if(temp<baja)
     {
      baja=temp;
     }
     
     if(temp>=alta)
     {
      alta=temp;
     }
     promedio=(baja+alta);
    }
    
   }
  //Calcular temperatura media o promedio
  media=promedio/2;
  
 
 
 //Salida de datos
 cout<<"Las temperaturas del dia fueron "<<endl;
 cout<<"La temperatura mas alta fue: "<<alta<<" Centigrados"<<endl;
 cout<<"La temperatura media del dia fue: "<<media<<" Centigrados"<<endl;
 cout<<"La temperatura mas baja fue: "<<baja<<" Centigrados"<<endl;
 cout<<endl;
 
 system("Pause");
  
} 
