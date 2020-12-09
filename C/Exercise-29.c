#include <math.h>
#include <conio.h>
#include <math.h>
#include <malloc.h>
#include <stdio.h>

struct temp{
             int nr_temp;
             float *valori_C;
           };

float* initializare(float *a,int x){

   a=(float*)malloc(x*sizeof(float));
   return a;

}
void citire(float *a[],int x){

     int i;
     for(i=0;i<x;i++)
     {
        printf("Temperatura orei %d este: ",i+1);
        scanf("%f",&a[i]);
     }

}
void afisare(float a[],int x)
{
   int i;
   printf("\nTemperaturile in grade celsius sunt: \n");
   for(i=0;i<x;i++)
    printf("Ora %d: %f\n",i+1,a[i]);
}

void temp_F(float a[],int x)
{
   int i;
   printf("\nTemperaturile in grade Fahrenheit sunt:\n");
   for(i=0;i<x;i++)
   printf("Ora %d: %f\n",i+1,(9*a[i]/5)+32);
}

float val_medie(float a[],int x)
{
  int i;
  float m=0;
  for(i=0;i<x;i++)
  m=m+a[i];
  m=m/x;
  return m;
}

float val_max(float a[],int x)
{
  int i;
  float max=a[0];
  for(i=0;i<x;i++)
   if(a[i]>max)
   max=a[i];
   return max;
}

float valoare(float a[],int i)
{
   return a[i];
}

int main()
{

   temp a[4];
   int i,j;
   for(i=0;i<4;i++)
   {
      a[i].nr_temp=3;
      a[i].valori_C=initializare(a[i].valori_C,a[i].nr_temp);
      printf("Temperaturile zilei %d : \n",i+1);
      citire(&a[i].valori_C,a[i].nr_temp);
   }
   for(i=0;i<4;i++)
   {
   printf("\nZiua %d: \n",i+1);

   afisare(a[i].valori_C,a[i].nr_temp);
  //temp_F(a[i].valori_C,a[i].nr_temp);
   }
   printf("\nValoarea media a temperaturilor este: %f \n",val_medie(a[i].valori_C,a[i].nr_temp));
   printf("\nValoarea maxima a temperaturilor este: %f \n",val_max(a[i].valori_C,a[i].nr_temp));

   getch();
   for(i=0;i<4;i++)
   printf("Valoarea temperaturii inregistrate la ora 7 in ziua %d este %f\n",i+1,valoare(a[i].valori_C,7));
   for(i=0;i<4;i++)
   free(a[i].valori_C);
   free(a);

   getch();


}
