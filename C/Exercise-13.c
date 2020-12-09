#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct adresa { char loc[20];
                char str[40];
                int nr; };

struct pers  { char nume[15];
               char prenume[20];
               int an_n;
               adresa adr; };

adresa citire_adr() { adresa a;
printf("\nlocalitatea = ");
scanf("%19s", a.loc);
printf("strada=");
scanf("%39s", a.str);
printf("nr:");
scanf("%d", &a.nr);
return a; }

void afisare_adr(adresa & a) {
printf("\nAdresa:\n");
printf("\nLocalitatea: %s",  a.loc);
printf("\nStrada: %s", a.str);
printf("\nNr: %d", a.nr); }

pers citire_pers() { pers p;
printf("\nnume=");
scanf("%14s", p.nume);
printf("prenume=");
scanf("%19s", p.prenume);
printf("anul nasterii:");
scanf("%4d", &p.an_n);
p.adr=citire_adr();
return p; }

void afisare_pers( pers & p) {
    printf("\nnume= %s", p.nume);
    printf("\nprenume= %s", p.prenume);
    printf("\nanul nasterii: %d", p.an_n);
    afisare_adr( p.adr ); }


void main() {
    FILE * f1;
    pers * lista;
    int nr_pers, i;

    if (!(f1=fopen("fis1.txt", "w+"))) // if (!(f1=fopen("fis1.txt", "a+")))
        {
            printf("\neroare la deschiderea fisierului fis1.txt");
            getch();
            return;
        }

  printf("\n introduceti numarul persoanelor din lista:");
  scanf("%d",  &nr_pers);
  lista=(pers *) malloc(sizeof(pers) * nr_pers);

  //citirea de la tastatura a numelor persoanelor din lista
  for(i=0 ; i<nr_pers ; i++)
    {
        lista[i]=citire_pers();
    }

  // afisarea datelor
  for(i=0 ; i<nr_pers ; i++)
    {
        afisare_pers(lista[i]);
    }

  //inregistrarea listei in fisier
  for(i=0;i<nr_pers;i++)
    fprintf(f1, "%14s %19s %4d %19s %39s %5d\n", lista[i].nume, lista[i].prenume, lista[i].an_n, lista[i].adr.loc, lista[i].adr.str, lista[i].adr.nr);



  rewind(f1);  // repozitionare la inceputul fisierului    //citirea datelor din fisier

  pers p;
  printf("\n\n\n==== Datele din fisier sunt: ====\n");

  while (!feof(f1))
    {
        if(fscanf(f1, "%14s %19s %4d %19s %39s %5d", p.nume, p.prenume, &p.an_n, p.adr.loc, p.adr.str, &p.adr.nr) == 6)
        {
            afisare_pers(p);     printf("\n---------------------------------------------\n");
        }
    }

  free(lista);   fclose(f1); }


