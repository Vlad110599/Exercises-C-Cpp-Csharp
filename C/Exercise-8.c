#include <conio.h>
#include <stdio.h>


int main(){

   float *temp;

   int i,n;
   float media,max;

   printf("\nIntroduceti nr de temperaturi:");
   scanf("%d",&n);

   temp=(float*)malloc(n*sizeof(float));

   printf("\nIntroduceti temperaturile:");
   for(i=0;i<n;i++)
   {
       printf("\ntemp[%d]=",i);
       scanf("%f",temp+i);
   }

   printf("\nS-au citit %d temperaturi.\n",n);

   printf("\nTemperaturile introduse sunt:");
   for(i=0;i<n;i++)
   {
    printf("\ntemp[%d]=%f",i,*(temp+i));
   }

   max=temp[0];
   for(i=0;i<n;i++)
    if(max<temp[i])
      max=temp[i];
   printf("\nTemperatura maxima este %f.",max);

   media=0;
   for(i=0;i<n;i++)
    media=media+temp[i];
   media=media/n;
   printf("\nMedia dintre temperaturi este : %f",media);

   free(temp);
     getch();

}

