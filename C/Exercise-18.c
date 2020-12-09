#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <malloc.h>
#include <string.h>


int main(){

   char nume[15],prenume[20],initiale[5],complet[40];
   char lib[]=" ";
   char *comp;


   printf("\nNume: ");
   scanf("%29s",&nume);

   printf("\nPrenume: ");
   scanf("%29s",&prenume);

   printf("\nIntiale: ");
   scanf("%4s",&initiale);

   comp=(char*)malloc(strlen(complet)+1*sizeof(char));

   strcat(comp, nume);
   strcat(comp, " ");
   strcat(comp, initiale);
   strcat(comp, " ");
   strcat(comp, prenume);

   printf("\n%s ",comp);
   getch();

   free(comp);


}
