#include <stdio.h>
#include <math.h>
int main(void)
{
    double n1, n2, n3;
    double sum=0;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    sum = n1+n2+n3;
    printf("%.0lf\n", floor(sum/3+0.5));
    sum = floor(n1+0.5)+floor(n2+0.5)+floor(n3+0.5);
    printf("%.0lf", floor(sum/3+0.5));
}
