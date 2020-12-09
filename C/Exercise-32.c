#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <malloc.h>


struct data{
              unsigned int zi,luna,an;
           };

void cititre(data *d){

   printf("zi= ");
   scanf("%d",&d->zi);
   printf("\nluna= ");
   scanf("%d",&d->luna);
   printf("\nan= ");
   scanf("%d",&d->an);

}

void afisare(data d){

   printf("%d",d.zi);
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
    else
    if(a.an<b.an)
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
                data start,end;
              };

 cititre_a(angajat *a){

      printf("\nNume:");
      scanf("%s",&a->nume);
      printf("\nData de incepere a concediului: ");
      citire(&a->start);
      printf("\nData de incheiere a concediului: ");
      citire(&a->end);

 }

 afisare_a(angajat *a){

     printf("\nNume: %s",a.nume);
     printf("\nPerioada de concediu: ");
     afisare(a.start);
     afisare(a.end);

 }
 suprapunere_c(angajat a,angajat b){

       if((compar(a.start,b.start)==1) && (compar(a.start,b.end)==1) || (compar(b.start,a.start)==1) && (compar(b.start,a.end)==1));
       return 1;
       else
       return 0;

 }

 int main(){

     angajat *a;
     int i,j,n,ok=0;
     printf("\nNr. Angajati: ");
     scanf("%d",&n);
     a=(angajat*)malloc(n*sizeof(angajat));
     for(i=0;i<n;i++)
        citire(&a[i]);

     getch();

     printf("\nAngajatii sunt: \n");
     for(i=0;i<n;i++)
         afisare(a[i]);

     getch();

     for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
        if(suprapunere_c(a[i],a[j])==1)
         {
            printf("\nSe suprapun zilele de concediu pentru: \n");
             afisare(a[i]);
             afisare(a[j]);
             k++;
         }
         if(k==0)
         printf("\nNu se suprapune nico zi de concediu!\n");

         getch();
         free(a);
 }
