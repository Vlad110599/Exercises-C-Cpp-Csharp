#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <malloc.h>

struct pol{
        int grad;
        float *coef;
      };

void init(pol &,int);
void citire(pol*);
void afisare(pol);
pol suma(pol,pol);
float val_pol(pol,float);
void elimin(pol*);

int main(){

   pol p1,p2,p3;
   float val,x;
   init(p1,3);
   init(p2,4);
   printf("Introduceti date pentru polinomul P1: \n");
   citire(&p1);
   printf("\nIntroduceti date pentru polinomul P2: \n");
   citire(&p2);
   printf("\n");
   printf("\nPolinomul p1 este: ");
   afisare(p1);
   printf("\nPolinomul p2 este: ");
   afisare(p2);
   p3=suma(p1,p2);
   printf("\nPolinomul suma p1+p2 este: ");
   afisare(p3);
   printf("\n");
   printf("\nIntroduceti o valoare pentru x: \n");
   scanf("%f",&x);
   val=val_pol(p1,x);
   printf("\nValoare polinomului p1 pentru x=%.2f este: %.2f",x,val);
   getch();
   elimin(&p1);
   elimin(&p2);
   elimin(&p3);

}


void init(pol &p,int gr){

   int i;
   p.grad=gr;
   p.coef=(float*)malloc(sizeof(float)*(p.grad+1));
   for(i=0;i<=p.grad;i++)
   p.coef[i]=0;

}

void citire(pol *p)
{
   int i;
   printf("\nIntrodu valorile coeficientilor:\n");
   for(i=0;i<=p->grad;i++)
   {
       printf("\ncoef[%d]= ",i);
       printf("%f",&p->coef[i]);
   }

}

void afisare(pol p){

  int i;
  for(i=p.grad;i>0;i--)
  {
     printf("%.2f * x ^ %d ",p.coef[i],i);
     if((p.coef[i-1]>0) && (i!=1))
     printf("+");
  }
     printf("%+.2f",p.coef[0]);
}

pol suma(pol p1,pol p2){

  int i;
  pol p;
  if(p1.grad>p2.grad)
    p.grad=p1.grad;
    else
    p.grad=p2.grad;

    p.coef=(float*)malloc(sizeof(float)*(p.grad+1));

  for(i=0;i<p.grad;i++)
  {
     if(i<=p1.grad)
        p.coef[i]=p1.coef[i];

     if(i<=p2.grad)
     p.coef[i]+=p2.coef[i];
  }
   return p;
}

float val_pol(pol p,float x)
{
   float val=0;
   int i;
   for(i=0;i<=p.grad;i++)
   val+=p.coef[i]*pow(x,i);
   return val;

}

void elimin(pol *p){

    free(p->coef);

}
