#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <malloc.h>

struct data{
              unsigned int zi,luna,an;
           };

 void citire(data *d){

       printf("zi= \n");
       scanf("%u",&d->zi);
       printf("\nLuna= \n");
       scanf("%u",&d->luna);
       printf("\nAn= \n");
       scanf("%u",&d->an);

 }

 void afisare(data d)
 {

    printf("\nData este: ");
    printf("%u",d.zi);
    switch(d.luna)
    {
      case 1: printf(" ianuarie "); break;
      case 2: printf(" februarie "); break;
      case 3: printf(" martie "); break;
      case 4: printf(" aprilie "); break;
      case 5: printf(" mai "); break;
      case 6: printf(" iunie "); break;
      case 7: printf(" iulie "); break;
      case 8: printf(" august "); break;
      case 9: printf(" septembrie "); break;
      case 10: printf(" octombrie "); break;
      case 11: printf(" noiembrie "); break;
      case 12: printf(" decembrie "); break;
      default: printf("Luna nu exista!");
    }
    printf("%d",d.an);

 }

int compar(data a,data b){

    if(a.an>b.an)
    return 0;
    else if(a.an<b.an)
    return 1;
    else if(a.an==b.an)
       if(a.luna>b.luna)
          return 0;
        else if(a.luna<b.luna)
            return 1;
          else if(a.luna==b.luna)
              if(a.zi>b.zi)
              return 0;
              else
              return 1;

 }

 struct angajat{
                  char nume[30];
                  struct data start,end;
               };

void citire_a(angajat *a){

      printf("\nNume: ");
      scanf("%29s",&a->nume);
      printf("\nData de incepere a concediului: \n");
      citire(&a->start);
      printf("\nData de incheiere a concediului: \n");
      citire(&a->end);

}

void afisare_a(angajat a)
{
   printf("\nNume: %s ",a.nume);
   printf("\nPerioada de concediu: \n");
   afisare(a.start);
   afisare(a.end);
}

int suprapunere_c(angajat a,angajat b){

   if((compar(a.start,b.start)==1) && (compar(a.start,b.end)==1) || (compar(b.start,a.start)==1) && (compar(b.start,a.end)==1))
   return 1;
   else
   return 0;

}

int main(){

   angajat *a;
   int n,j,ok=0,i;
   printf("Nr.angajati: ");
   scanf("%d",&n);
   a=(angajat*)malloc(n*sizeof(angajat*));
   for(i=0;i<=n;i++)
     citire_a(&a[i]);
   printf("\nAngajatii sunt: \n");
   for(i=0;i<=n;i++)
   afisare_a(a[i]);
   getch();
   for(i=0;i<=n;i++)
     for(j=i+1;j<=n;j++)
     if(suprapunere_c(a[i],a[j])==1)
       {
         printf("\nSe suprapun zilele de concediu pentru: ");
         afisare_a(a[i]);
         afisare_a(a[j]);
         ok=1;
       }
      if(ok==0)
        printf("\nNu se suprapune nicio zi de concediu");
        free(a);
        getch();

}
