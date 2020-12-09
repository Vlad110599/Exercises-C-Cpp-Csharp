#include <conio.h>
#include <math.h>
#include <stdio.h>

struct dreptunghi{
                    int x1,y1,x2,y2;
                 };

 void normaliare(dreptunghi &d){

       if((d.x1=>1)&&(d.x1<=80))
         scanf("%d",d.x1)
         printf("\nNr se afla in intervalul[1,80]\n");
         else
         printf("\nNumarul nu se afla in intervalul [1,80]\n");


 if((d.x2=>1)&&(d.x2<=80))
         scanf("%d",d.x2)
         printf("\nNr se afla in intervalul[1,80]\n");
         else
         printf("\nNumarul nu se afla in intervalul [1,80]\n");

         if((d.y1=>1)&&(d.y1<=24))
         scanf("%d",d.y1)
         printf("\nNr se afla in intervalul[1,24]\n");
         else
         printf("\nNumarul nu se afla in intervalul [1,24]\n");

         if((d.y2=>1)&&(d.y2<=24))
         scanf("%d",d.y2)
         printf("\nNr se afla in intervalul[1,24]\n");
         else
         printf("\nNumarul nu se afla in intervalul [1,24]\n");

 }

 void citire(dreptunghi d)
 {
    printf("x1= ");
    normalizare(x1);
    printf("\ny1= ");
    normalizare(y1);
    printf("x2= ");
    normalizare(x2);
    printf("\ny2= ");
    normalizare(y2);
 }

 void afisare(dreptunghi d)
 {
    printf("\n(%d,%d)\n",d.x1,d.y1);
    printf("\n(%d,%d)\n",d.x2,d.x2);
 }

 int main()
 {
    dreptunghi *d;
    citire(&d);
    afisare(d);
 }
