#include <math.h>
#include <conio.h>
#include <stdio.h>

void factorial(int a)
{
   int i;
   unsigned long long fac=1;

   if(a<0)
     printf("\nNu se poate calcula factorialul!\n");
     else
     {
        for(i=1;i<=a;i++)
        {
           fac*=i;
        }
        printf("%llu",fac);
     }
     getch();
}

int combinari(int a,int b)
{
    unsigned long n,m,p,q,c;
    n=factorial(a);
    m=factorial(b);
    p=a-b;
    q=factorial(p);
    c=n/(m*q);
    return c;
}

int main()
{
   int n,k;

   printf("\nn=");
   scanf("%d",&n);
   printf("\nk=");
   scanf("%d",&k);

   factorial(n);
   printf("\n");
   factorial(k);
   printf("\n");

   getch();
}
