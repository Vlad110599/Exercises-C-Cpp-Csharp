#include <stdio.h>
#include <conio.h>
#include <math.h>

void inversare(char*);
char elimin_poz(char*,int);
void trunchiere_sir(char*,int);

int main(){

  char sir[50];
  printf("Introdu un sir de caractere:");
  scanf("%49s", sir);

  inversare(sir);
  printf("\nSirul inversat este %s \n", sir);


  char ch;
  int poz;
  printf("\nIntrodu [ozitia de pe care se va elimina un caracter:");
  scanf("%d",&poz);

  ch=elimin_poz(sir,poz);
  printf("\nSirul este : %s\n",sir);
  if(ch!=0)
    printf("\nCaracterul eliminat este: %c",ch);
  else
    printf("\nNu s-a eliminat nici un caracter!\n");

  int nr;
  printf("\nIntrodu lungimea la care se trunchiaza sirul :");
  scanf("%d",&nr);

  trunchiere_sir(sir,nr);
  printf("\nSirul este %s \n",sir);
  return 0;

}


void inversare(char *sir){

   char aux;
   int i;

   for(i=0;i<strlen(sir)/2;i++)
   {
     aux=*(sir+i);
     *(sir+i)=*(sir+strlen(sir)-1-i);
     *(sir+strlen(sir)-1-i)=aux;
   }

}

char elimin_poz(char *sir,int p){

  int i;

  if(p<strlen(sir))
  {
    char c=*(sir+p-1);
    for(i=p-1;i<strlen(sir);i++)
    *(sir+i)=*(sir+i+1);
    return c;

  }
  return 0;

}

void trunchiere_sir(char *sir,int n){

  if(n<strlen(sir))
     *(sir+n)=0;

}
