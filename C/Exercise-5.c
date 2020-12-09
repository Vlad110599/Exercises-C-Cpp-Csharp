#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

 int i;
 unsigned int grad;
 float val_pol,x,coef[10];


 do{

   printf("\nIntroduc gradul polinomului (<9):\n");
   scanf("%u",&grad);

 }while(grad>9);

  printf("\nCitire coeficienti:\n ");
  for(i=0;i<grad+1;i++)
  {
    printf("\ncoef[%d]=",i);
    scanf("%f",&coef[i]);
  }

  printf("\nAfisare polinom:\n");
  for(i=grad;i>0;i--)
  if(coef[i]!=0)
  {
     printf("%.2f * x^%d",coef[i],i);
     if((coef[i-1]>0)&&(i!=1))
     printf("+");
  }
  printf("%+.2f",coef[i]);
  getch();

 printf("\nIntrodu valoarea lui x:\n");
 scanf("%f",&x);

 val_pol=0;
 for(i=0;i<grad+1;i++)
 val_pol+=coef[i]*pow(x,i);

 printf("Valoare polinomului pentru x=%.2f este %.2f",x,val_pol);

 getch();



}
