#include <conio.h>
#include <stdio.h>
#include <math.h>

void citire(float [][10],int,int);
void afisare(float [][10],int,int);
void produs(float [][10],float [][10],float [][10],int,int,int);

void main(){

int m,n,p;\
float a[10][10],b[10][10],c[10][10];
printf("\nm=");
scanf("%d",&m);
printf("\nn=");
scanf("%d",&n);
printf("\np=");
scanf("%d",&p);

printf("Introdu elementele primei matrici:\n");
citire(a,m,n);
printf("Introdu elementele celi de a doua matrice:\n");
citire(b,n,p);
produs(a,b,c,m,n,p);
afisare(a,m,n);
afisare(b,n,p);
afisare(c,m,p);
getch();

}

void citire(float m[10][10],int r,int s){

   int i,j;

   for(i=0;i<r;i++)
    for(j=0;j<s;j++)
   {
       printf("elem[%d][%d]=",i,j);
       scanf("%f",&m[i][j]);
   }

}

void afisare(float m[10][10],int r,int s){

   int i,j;
   printf("\n");
   for(i=0;i<r;i++)
   {
       for(j=0;j<s;j++)
       printf("%8.2f",m[i][j]);
       printf("\n");
   }

}

void produs(float m1[10][10],float m2[10][10],float m3[10][10],int r,int s,int p){

   int i,j,k;

   for(i=0;i<r;i++)
     for(j=0;j<p;j++)
       for(k=0,m3[i][j]=0;k<s;k++)
       m3[i][j]+=m1[i][k]*m2[k][j];


}
