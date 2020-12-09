#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <malloc.h>


struct timp{

    int ora,min,sec;

};

void citire(timp *t){

do
{
    printf("ora: \n");
    scanf("%d",&t->ora);
}while(t->ora<0 || t->ora>24);

do{
    printf("\nmin: \n");
    scanf("%d",&t->min);
}while(t->min<0 || t->min>59);

do{
    printf("\nsec: \n");
    scanf("%d",&t->sec);
}while(t->sec<0 || t->sec>59);

}

void afisare(timp t)
{

   printf("\nTimp: %d - %d - %d  ",t.ora,t.min,t.sec);

}

int compar(timp t,timp p)
{

  if(t.ora>p.ora)
   return 0;
   else if(t.ora<p.ora)
      return 1;
      else
      if(t.ora==p.ora)
         if(t.min>p.min)
            return 0;
            else if(t.min<p.min)
              return 1;
            else if(t.min==p.min)
              if(t.sec>p.sec)
                return 0;
                else
                return 1;

}

struct eveniment{

    char descriere[40];
    timp start,end;

};


void citire_ev(eveniment *e)
{

   printf("\nNume eveniment: \n");
   scanf("%s",e->descriere);
   printf("\nIncepere: \n");
   citire(&e->start);
   printf("\nIncheiere: \n");
   citire(&e->end);

}

void afisare_ev(eveniment e)
{

    printf("\nDescriere: %s ",e.descriere);
    printf("\nInterval orar: ");
    afisare(e.start);
    afisare(e.end);

}

int suprapunere_ev(eveniment a,eveniment b)
{
   if((compar(a.start,b.start)==1) && (compar(a.start,b.end)==1) || (compar(b.start,a.start)==1) && (compar(b.start,a.end)==1))
   return 1;
   else
   return 0;
}

int main(){

  eveniment *ag;
  int n,i,j,k=0;

  printf("\nNr. Evenimente: ");
  scanf("%d",&n);
  ag=(eveniment*)malloc(n*sizeof(eveniment*));
  printf("Citire evenimente:\n");
  for(i=0;i<n;i++)
    citire_ev(&ag[i]);
    printf("\n");
    getch();

  for(i=0;i<n;i++)
     afisare_ev(ag[i]);
     printf("\n");
     getch();

  for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
  if(suprapunere_ev(ag[i],ag[j])==1)
  {
     printf("\Se suprapune:\n");
     afisare_ev(ag[i]);
     afisare_ev(ag[j]);
     k=1;

  }

  if(k==0)
  printf("\nNu se suprapun evenimente!\n");
  getch();


}
