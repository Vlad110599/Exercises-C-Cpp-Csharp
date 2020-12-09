#include <conio.h>
#include <stdio.h>
#include <math.h>

#define N 20

struct data
   {
      int zi,luna,an;
   };
struct student
   {
      char nume[15],prenume[15];
      struct data data_n;
      int gr;
      int note[8];
      float media;
   };


void citire(student&s){

  int i;


  printf("Nume: ");
  scanf("%14s",s.nume);
  printf("\nPrenume:");
  scanf("%14s",s.prenume);
  printf("\nData nasterii:");
  scanf("%d%*c%d%*c%d",&s.data_n.zi,s.data_n.luna,s.data_n.an);
  printf("\nGrupa:");
  scanf("%d",&s.gr);
  printf("\nNotele:");
  s.media=0;
  for(i=0;i<8;i++)
     {
        printf("Nota %d =",i+1);
        scanf("%d",&s.note[i]);
        s.media+=s.note[i];
     }
     s.media=s.media/8;

}

void afisare(student&s)
{

   int i;
   printf("==============Student===================");
   printf("Nume: %s"s.nume);
   printf("Prenume: %s",s.prenume);
   printf("Grupa: %d",s.gr);
   printf("Notele:");
   for(i=0;i<8;i++)
   printf("%d",s.note[i]);

   printf("Media= %.2f",s.media);
   printf("==========================================");

}

void main(){

   struct student grupa[N];
   int nr_stud,k;

   printf("Introduceti numarul studentilor: ");
   scanf("%d",&nr_stud);

   printf("\nIntroduceti datele studentilor:");
   for(k=0;k<nr_stud;k++)
    {
      printf("\nIntroduceti datele studentului: %d",k+1);
      citire(grupa[k]);
    }

   printf("\nDatele citite sunt:");
   for(k=0;k<nr_stud;k++)
   {
      afisare(grupa[k]);
      getch();
   }

    getch();
}


