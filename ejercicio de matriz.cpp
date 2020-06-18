#include <iostream>
#include "conio.h"

#define MAXCOL 20
#define MAXROW 20

uso de espacio de nombres std;

void carga (matriz int[MAXROW][MAXCOL],int n, int m);
void mostrar (matriz int[MAXROW][MAXCOL],int n, int m);
int mayor (matriz int[MAXROW][MAXCOL],int n, int m);
void clasificar_fila(int matrix[MAXROW][MAXCOL],int n, int m);

void main()
{ int n,m, matriz[MAXROW][MAXCOL];
 Validando las filas
 hacer 
  {
 cout<<"Entrada el numero de filas: ";
	  cin>>n;
 • while ((n>MAXROW) (n<-0));
	 
 Columnas validando
 hacer 
  {
 cout<<"Entrada el numero de columnas: ";
	  cin>>m;
 • while ((m>MAXCOL) (m<-0));

 (matriz,n,m);
  mostrar (matriz,n,m);
 cout<<"El alcalde valor de la matriz es: "<< mayor(matriz,n,m);
  clasificar_fila(matriz,n,m);
  mostrar(matriz,n,m);
  getch();
}

void carga(int matrix[MAXROW][MAXCOL],int n, int m)
Int i, j;
 
 for(i-0;i<n;i++)
 for(j-0;j<m;j++)
 •cout<<"MAT ["<<i<<"] ["<<j<<"]: ";
      cin>>matrix[i][j];
     }
}

void mostrar(int matrix[MAXROW][MAXCOL],int n, int m)
Int i, j;
 
 for(i-0;i<n;i++)
 •for(j-0;j<m;j++)
 cout<<"MAT ["<<i<<"] ["<<j<<"]: "<<matrix[i][j]<<"-t"; 
	cout<<endl;
   }
}

int mayor (matriz int[MAXROW][MAXCOL],int n, int m)
Int tmayor,i, j;
 
Matriz tmayor[0][0];
 for(i-0;i<n;i++)
 for(j-0;j<m;j++)
 • if(tmayor<matrix[i][j])
 tmayor-matrix[i][j];
   
     }
regreso tmayor;
}

int clasificar_fila(int matrix[MAXROW][MAXCOL],int n, int m)
{
int i, j, x, y, aux;
 
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 for(x=0;x<n;x++)
 for(y=0;y<m;y++)
 if(matrix[i][j]<matrix[x][y])
 {aux=matrix[i][j];
 matrix[i][j]=matrix[x][y];
 matrix[x][y]=aux;
}
}
