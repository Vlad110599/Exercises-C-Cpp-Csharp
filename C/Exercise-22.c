#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void main(){

 float delta, a,b,c, x1,x2;

 printf("Introduceti coeficientul lui x^2:\n");
 if(scanf("%f",&a)!=1)
 {
    printf("\nCoeficientul lui x^2 este incorect\n");
    getch();
    return;
 }

 printf("\nIntroduceti coeficientul lui x: ");
 if(scanf("%f",&b)!=1)
 {
    printf("\nCoeficientul lui x este incorect!\n");
    getch();
    return;
 }

printf("\nIntroduceti termenul liber: ");
if(scanf("%f",&c)!=1)
{
   printf("\ntermenul liber este incorect!\n");
   getch();
   return;
}

if(a==0 && b==0 && c==0)
{
   printf("\nEcuatie imposibila!\n");
}

if(a==0 && b==0)
{
   printf("\nEcuatie inexistenta!\n");
   getch();
   return;
}

if(a==0)
{
    printf("\nEcuatie de gradul I ");
    printf("\nSolutie x= %.2f\n",-c/b);
    getch();
    return;
}

delta= (b*b) - 4*a*c;
if(delta < 0)
{
   printf("\nSolutie nr. complexe!\n");
   printf("\nx1= %.2f + %.2f*i",-b/(2*a),sqrt(-delta)/(2*a));
   printf("\nx1= %.2f - %.2f*i\n",-b/(2*a),sqrt(-delta)/(2*a));
   getch();
   return;

}

if(delta == 0)
{
   printf("\nSolutie unica!\n");
   printf("\nx1=x2= %.2f", -b/(2*a));
   getch();
   return;
}

if(delta >0)
{
   printf("\nSolutie dubla!");
   printf("\nx1= %.2f",(-b+sqrt(delta))/(2*a));
   printf("\nx2= %.2f",(-b-sqrt(delta))/(2*a));
   getch();
   return;
}

}

