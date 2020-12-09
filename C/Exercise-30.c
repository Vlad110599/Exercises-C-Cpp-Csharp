#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

struct produs{
               char denumire[20];
               char cod[15];
               float pret;
             };
  void citire(produs *a){

      printf("Denumire: \n");
      scanf("%s",&a->denumire);
      printf("\nCod: ");
      scanf("%s",&a->cod);
      printf("\nPret: ");
      scanf("%f",&a->pret);
  }
  void afisare(produs a)
  {
     printf("Nume: %s\nCod: %s\nPret: %.2f\n",a.denumire,a.cod,a.pret);
  }
  int compar(produs a,produs b)
  {
     if(strcmp(a.denumire,b.denumire)==0)
        return 0;
        else
        if(strcmp(a.denumire,b.denumire)<0)
        return -1;
        else
        if(strcmp(a.denumire,b.denumire)>0)
        return 1;
  }

  int main(){

    FILE *f;
    produs *a,b;
    int n,i,j,ok=0;
    char aux[30];
    printf("Nr.produse: \n");
    scanf("%d",&n);
    printf("\n");
    a=(produs*)malloc(n*sizeof(produs));
    for(i=0;i<n;i++)
    {
      citire(&a[i]);
      printf("\n");
    }
    printf("\nProdusele sunt:\n");
    for(i=0;i<n;i++)
    {
       afisare(a[i]);
       printf("\n");
    }
    getch();
    printf("\nIntrodu numele unui produs: ");
    scanf("%s",&b.denumire);
    for(i=0;i<n && ok!=1;i++)
    if(compar(a[i],b)==0)
    {
       afisare(a[i]);
       ok=1;
    }
    if(ok==0)
    printf("\nProdusul nu exista!\n");
    getch();
    for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
        if(compar(a[i],a[j])==1)
        {
          strcpy(aux,a[i].denumire);

          strcpy(a[i].denumire,a[j].denumire);
          strcpy(a[j].denumire,aux);
        }
        printf("\nProdusele ordonate alfabetic sunt:\n");
        for(i=0;i<n;i++)
        {
           afisare(a[i]);
           printf("\n");
        }
        getch();

    f=fopen("produs.txt","w+");
    if(f==NULL)
      printf("Fisieru nu s-a putut deschide");
      else
      {
         for(i=0;i<n;i++)
         fprintf(f,"Nume: %s Cod: %s Pret: %.2f \n",a[i].denumire,a[i].cod,a[i].pret);
         fclose(f);
      }
      free(a);
      getch();



  }
