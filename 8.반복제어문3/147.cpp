#include <stdio.h>
int main(void){
    int num, i, j;
    int k=1;
    scanf("%d", &num);
    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            printf("  ");
        }
        for(j=0;j<num-i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
