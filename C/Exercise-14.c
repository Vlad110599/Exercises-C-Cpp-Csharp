#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(){

   float coef[10];

   int i,gr,x;
   float val_pol;

   do{

        printf("Introduceti gradul polinomului (<9):");
        scanf("%u",&gr);
      }while(gr>9);

   printf("\n\nCitire coeficienti:\n");
   for(i=0;i<gr+1;i++)
   {
      printf("\ncoef[%d]= ",i);
      scanf("%f",&coef[i]);
   }

   printf("\nAfisare polinom:\n");
   for(i=gr;i>0;i--)
     if(coef[i]!=0)
     {
       printf("%.2f *x ^%d",coef[i],i);
       if((coef[i-1]>0) && i!=1)
         printf("+");
     }
     printf("%+.2f",coef[i]);

     printf("\nIntroduceti valoarea lui x:");
     scanf("%d",&x);

     val_pol=0;
     for(i=0;i<gr;i++)
       val_pol+=coef[i]*pow(x,i);

     printf("Valoarea polinomului pentru x= %d , este : %.2f",x,val_pol);

   getch();
}
