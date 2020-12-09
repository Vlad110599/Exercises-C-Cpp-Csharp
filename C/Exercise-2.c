
#include <stdio.h>
#include <conio.h>

void minim(int a,int b,int c);

int main(){

int a,b,c;
 printf("Introduceti trei numere: ");
 scanf("%d %d %d\n",&a,&b,&c);
 minim(a,b,c);

}


void minim(int a,int b,int c){

  printf("Cel mai mic nr. este: ");
  if(a<b)
  {
    if(a<c)
    printf("a=%d\n",a);
    else
    printf("c=%d\n,",c);
  }
  else
  {
  if(b<c)
   printf("b=%d\n",b);
   else
   printf("c=%d\n",c);
  }
}
