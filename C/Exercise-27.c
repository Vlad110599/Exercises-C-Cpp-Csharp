#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <malloc.h>

struct pol{
             int grad;
             float *coef;
          };

void citire(pol &);
void afisare(pol);
pol suma(pol,pol);
float val_pol(pol,float);

int main(){

    pol p1,p2,p3;
    float x,val;

    printf("Introduceti valori pentru p1: \n");
    citire(p1);
    printf("\nIntroduceti valori pentru p2: \n");
    citire(p2);
    printf("\n");
    printf("\nPolinomul p1 este: \n");
    afisare(p1);
    printf("\nPolinomul p2 este: \n");
    afisare(p2);
    p3=suma(p1,p2);
    printf("\nPolinomul suma p1+p2 este: \n");
    afisare(p3);
    printf("\n");
    printf("\nIntroduceti o valoare pentru x: \n");
    scanf("%f",&x);
    val=val_pol(p1,x);
    printf("\nValoarea polinomului p1 pentru x=%.2f este %.2f",x,val);
    getch();
    free(&p1);
    free(&p2);
    free(&p3);

}

void citire(pol &p){

    int i;
    do{
        printf("Introduceti gradul polinomuli: \n");
        scanf("%d",&p.grad);
      }while(p.grad<0);
     p.coef=(float*)malloc(sizeof(float)*p.grad+1);
     printf("\nIntroduceti coeficientii: ");
     for(i=0;i<=p.grad;i++)
     {
       printf("\ncoef[%d]= ",i);
       scanf("%f",&p.coef[i]);
     }

}

void afisare(pol p){

    int i;
    for(i=p.grad;i>0;i--)
    {
       printf("%.2f * x ^%d",p.coef[i],i);
       if((p.coef[i-1]>0) && (i!=1))
       printf("+");
    }

    printf("%+.2f",p.coef[i]);
}

pol suma(pol p1,pol p2){

    int i;
    pol p;
    if(p1.grad>p2.grad)
    p.grad=p1.grad;
    else
    p.grad=p2.grad;

    p.coef=(float*)malloc(sizeof(float)*p.grad+1);

    for(i=0;i<=p.grad;i++)
    {
       if(i<=p1.grad)
       p.coef[i]=p1.coef[i];

       if(i<=p2.grad)
       p.coef[i]+=p2.coef[i];

    }
    return p;

}

float val_pol(pol p,float x){

   int i;
   float val=0;
   for(i=0;i<p.grad;i++)
   val+=p.coef[i]*pow(x,i);
   return val;

}
