#include <conio.h>
#include <stdio.h>
#include <math.h>


struct pol{
             int grad;
             float coef[10];
          };


void citire(pol *p){

    int i;

    do{
       printf("Introduceti gradul polinomului: \n");
       scanf("%d",&p->grad);
    }while((p->grad<0) || (p->grad>9));

    printf("\nIntroduceti coeficientii polinomului: ");
    for(i=0;i<=p->grad;i++)
    {
       printf("coef[%d]= ",i);
       scanf("%f",&p->coef[i]);
    }

}

void afisare(pol p){

      int i;

      printf("\nPolinomul este: ");
      for(i=p.grad;i>0;i--)
      {
         printf("%.2f *x ^%d ",p.coef[i],i);
         if((p.coef[i-1]>0)&&(i!=1))
         printf("+");
      }
      printf("%+.2f",p.coef[i]);

}

pol suma(pol a,pol b){

    pol p;
    int i;
    p.grad=a.grad>b.grad?a.grad:b.grad;
    for(i=0;i<=p.grad;i++)
      {
      if(i<=a.grad)
        p.coef[i]=a.coef[i];
      else
      p.coef[i]=0;

      if(i<=b.grad)
         p.coef[i]+=b.coef[i];
     }
     return p;
}

float val_pol(pol p,float x){

  float val=0;
  int i;
  for(i=0;i<p.grad;i++)
  val+=p.coef[i]*pow(x,i);

  return val;

}


int main(){

 pol a,b,c;
 float x,val;

 printf("Introduceti informatii pentru p1: \n");
 citire(&a);

 printf("Introduceti informatii pentru p2: \n");
 citire(&b);

 printf("\n");
 getch();

 printf("\nAfisare polinom p1: \n");
 afisare(a);
 printf("\n");
 printf("\nAfisare polinom p2: \n");
 afisare(b);
 c=suma(a,b);
 printf("\nPOlinomul suma p1+p2 este: \n");
 afisare(c);
 getch();
 printf("\n");

 printf("\nx= \n");
 scanf("%f",&x);

  val=val_pol(a,x);

  printf("\nValoarea polinomului pentru x = %.2f este: %.2f",x,val);

  getch();

}



