#include <stdio.h>
#include <math.h>
#include <conio.h>

struct pol{
             int grad;
             float coef[10];
          };

 void cititre(pol);
 void afisare(pol);
 pol suma(pol,pol);
 float val_pol(pol,float);

 int main(){

    pol p1,p2,p3;
    float val,x;

    printf("Introduceti date pentru polinomul P1: \n");
    citire(p1);
    printf("\nIntroduceti date pentru polinomul P2: \n");
    citire(p2);
    printf("\n");
    printf("\nPolinomul p1 este: ");
    afisare(p1);
    printf("\nPolinomul p2 este: ");
    afisare(p2);
    p3=suma(p1,p2);
    afisare(p3);
    printf("\n");
    printf("\nIntroduceti o valoare pentru x: \n");
    scanf("%f",&x);
    val=val_pol(p1,x);
    printf("\nValoarea polinomului pentru x=%.2f este: %.2f",x,val);
    getch();


 }

 void citire(pol p){

    int i;
    do{
       printf("Introduceti gradul polinomului: \n");
       scanf("%d",&p.grad);
    }while((p.grad<0)||(p.grad>9));

    printf("\nIntroduceti coeficientii: \n");
    for(i=0;i<=p.grad;i++)
    {
       printf("\ncoef[%d]= ",i);
       scanf("%f",p.coef[i]);
    }

 }

 void afisare(pol p){

     int i;

     for(i=p.grad;i>0;i--)
     {
       printf("%.2f *x ^ %d ",p.coef[i],i);
       if((p.coef[i]>0) && (i!=1))
       printf("+");
     }
     printf("%+.2f",p.coef[i]);
 }

pol suma(pol p1,pol 2){

    pol p;
    if(p1.grad>p2.grad)
    p.grad=p1.grad;
    else
    p.grad=p2.grad;

    for(i=0;i<=p.grad;i++)
    {
       if(i<=p1.grad)
       p.coef[i]=p1.coef[i];
       else
       p.coef[i]=0;

       if(i<=p2.grad)
       p.coef[i]+=p2.coef[i]
    }
    return p;

 }

float val_pol(pol p,float x){

  float val=0;
  int i;
  for(i=0;i<=p.grad;i++)
  val+=p.coef[i]*pow(x,i);
  return val;

}
