#include <math.h>
#include <conio.h>
#include <stdio.h>


int main(){

  int i;
  unsigned int grad;
  float coef[10],val_pol,x;

  do
  {
     printf("Introduceti gradul polinomului: \n");
     scanf("%u",&grad);
  }while(grad > 9);

  printf("\nCititre coeficienti!\n");
  for(i=0;i<=grad;i++)
   {
      printf("\ncoef[%d]= ",i);
      scanf("%f",&coef[i]);
   }

   printf("\nAfisarea polinomului!");
   for(i=grad;i>0;i--)
   {
      printf("%.2f * x ^ %d ",coef[i],i);
      if((coef[i-1]>0)&&(i!=1))
      printf("+");
   }
   printf("%+.2f",coef[i]);
   getch();

   printf("\nIntroduceti valoarea lui x: \n");
   scanf("%f",&x);

   val_pol=0;
   for(i=0;i<grad+1;i++)
   val_pol=val_pol+(coef[i]*pow(x,i));

   printf("Valoarea polinomului pentru x=%.2f, este: %.2f",x,val_pol);


}
