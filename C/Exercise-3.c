#include <math.h>
#include <stdio.h>
#include <conio.h>

void ecgr2(float a,float b,float c);

int main(){

  float a ,b,c;
  printf("a=\n");
  scanf("%f",&a);
  printf("b=\n");
  scanf("%f",&b);
  printf("c=\n");
  scanf("%f",&c);
  ecgr2(a,b,c);

}


void ecgr2(float a,float b,float c){

  float delta,d,b1;

  b1=-b/(2.0*a);
  delta=b1*b1-c/a;
  if(delta==0)
  printf("Solutie dubla: %f\n", b1);
  else if(delta>0){
    d=sqrt(delta);
    printf("Solutia ecutiei: %.1f si %.1f\n", b1+d,b1+d);
  }else
  {
   d=sqrt(-delta);
   printf("Solutia ecuatiei: %.1f+%.1fi si %.1f-%.1fi",b1,d,b1,d);
  }
}
