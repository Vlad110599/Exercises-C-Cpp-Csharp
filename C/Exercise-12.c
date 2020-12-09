#include <conio.h>
#include <math.h>
#include <stdio.h>


struct triunghi
     {
        int l1,l2,l3;
        float arie;
     };

void citire(triunghi &t)
   {
       printf("\nLatura 1 = ");
       scanf("%d",&t.l1);
       printf("\nLatura 2 = ");
       scanf("%d",&t.l2);
       printf("\nLatura 3 = ");
       scanf("%d",&t.l3);

       t.arie=t.l1*t.l2*t.l3;

   }
void afisare(triunghi &t)
   {
      printf("\nl1 = %d",t.l1);
      printf("\nl2 = %d",t.l2);
      printf("\nl3 = %d",t.l3);
      printf("\nAria = %f",t.arie);
   }

int main(){

   struct triunghi tr;

   printf("\nCitirea laturilor:\n");
   citire(tr);
   printf("\nLaturile sunt:\n");
   afisare(tr);

}
