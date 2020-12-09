#include <math.h>
#include <conio.h>
#include <stdio.h>

struct polinom{

      int grad;
      float coef[10];

};

void citire(polinom &p)
    {
       int i;
       do{
          printf("Introduceti gradul polinomului(<9)\n\n");
          scanf("%u",&p.grad);
       }while(p.grad>9);
       printf("\nCititre coeficienti\n");
       for(i=0;i<p.grad+1;i++)
       {
          printf("coef[%d]= ",i);
          scanf("%f",p.coef[i]);
       }
    }

void afisare(polinom &p)
{
   int i;
   printf("\nAfisare polinom\n");
   for(i=p.grad;i>0;i--)
    if(p.coef[i]!=0)
      {
         printf("%.2f * x ^ %d",i,p.coef[i]);
         if((p.coef[i-1]>0) && i!=1)
           printf("+");
      }
      printf("%+.2f",p.coef[i]);
}

void val(polinom &p)
  {
     int i;
     float x, val_pol;

     printf("\nx=");
     scanf("%f",x);

     val_pol=0;
     for(i=0;i<p.grad;i++)
       val_pol+=p.coef[i]*pow(x,i);
     printf("\nValoare polinomului pentru x= %.2f este %.2f",x,val_pol);

  }

  int main()
  {
     polinom p;

     citire(p);
     afisare(p);
     val(p);
  }
