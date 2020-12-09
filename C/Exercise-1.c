#include <math.h> /* funct¸ii matematice */
#include <stdio.h>
void main(void)
{
float a, b, c, b1, d, delta;
printf("Coeficientii ecuatiei: "); /* ax^2+bx+c=0 */
scanf("%f%f%f", &a, &b, &c);
b1 = -b/(2.0*a); delta = b1*b1 - 4*a*c;
if (delta == 0) printf("Solutie dubla: %f\n", b1);
else if (delta > 0) {
d = sqrt(delta); /* rˇadˇacinˇa pˇatratˇa */
printf("Solutii: %.1f ¸si %.1f\n", b1+d, b1-d);
} else /* delta < 0 */ {
d = sqrt(-delta);
printf("Solutii: %.1f+%.1fi si %.1f-%.1fi\n", b1, d, b1, d);
}
}
