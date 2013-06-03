# include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;

int n,i,j;
int** Mas = new int *[n];
int prov()//провераем на то что в двух разных строках нету 2 элементах меньше или равно 0
{
   int k=0;
   for (int i=0; i<n; i++){
      k=0;
      for (int j = 0; j < n; j++)
		 if ( Mas[i][j]<=0)k++;
	  if(k>2)
	  return false;
   }
   return true;
}


int summ() //посчитали сумму
{
   int sum=0;
   for (int i = 0; i < n; i++)
      for (int j = 0; j < i; j++)
         sum +=Mas[i][j];
   return sum;
}

int main(){

    printf("Vvedite n(matriha kvadratnai)\n");
    cin >> n;


    for (int i = 0; i < n; ++i)
        Mas[i] = new int [n];
        cout<<"Vvedite l\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> Mas[i][j];


    if (!prov())
       printf("Ne udvolitvoraet usloviu");
    else
       printf("%d", summ());
 getch();
}//---------------------------------------------------------------------------33
