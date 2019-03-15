#include <stdio.h>
int main()
{
    int num, i, j;
    scanf("%d", &num);
    for(i=0;i<num;i++){
        for(j=0;j<num*2-2-i*2;j++){
            printf(" ");
        }
        for(j=0;j<i*2+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
