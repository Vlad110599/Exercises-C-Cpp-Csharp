#include <stdio.h>
#include <conio.h>



int main(){

   int i;
   int tab1[5];
   int tab2[7];

   printf("Tabloul tab1 se afla la adresa %u si ocupa %d octeti.\n",tab1,sizeof(tab1));
   printf("\nTabloul tab2 se afla la adresa %u si ocupa %d octeti.\n",tab2,sizeof(tab2));

   printf("\nAfisarea elementelor tab1 - contine valori reziduale:\n");
   for(i=0;i<5;i++)
   printf("\ntab1[%d]=%d",i,tab1[i]);
   getch();


   printf("\nAfisarea elementelor tab2 - contine valori de initializare");
   for(i=0;i<7;i++)
   printf("\ntab2[%d]=%d",i,tab2[i]);
   getch();


   printf("\nCitire de valori de la tastatura pentru tab1:\n");
   for(i=0;i<5;i++)
   {
   printf("\ntab1[%d]=",i);
   scanf("%d",&tab1[i]);
   }


   printf("\nAfisarea elementelor din tab1 - valori cititte de la tastatura:\n");
   for(i=0;i<5;i++)
   printf("\ntab1[%d]=%d",i,tab1[i]);
   getch();


   printf("\nCitire de valori de la tastatura pentru tab2:\n");
   for(i=0;i<7;i++)
   {
   printf("\ntab2[%d]=",i);
   scanf("%d",&tab2[i]);
   }

   printf("\nAfisarea elementelor din tab2 - valori cititte de la tastatura:\n");
   for(i=0;i<7;i++)
   printf("\ntab2[%d]=%d",i,tab2[i]);
   getch();

   printf("\nAfisarea elementelor tab2 - divizibile cu 2:\n");
   for(i=0;i<7;i++)
   if(!(tab2[i]%2))
   printf("\ntab2[%d]=%d",i,tab2[i]);
   getch();

   printf("\nInlocuirea valorilor negative din tab 2 cu 0:");
   for(i=0;i<7;i++)
    if(tab2[i]<0)
    printf("\ntab2[%d]= 0",i);
    else
    printf("\ntab2[%d]=%d",i,tab2[i]);

   getch();

}
