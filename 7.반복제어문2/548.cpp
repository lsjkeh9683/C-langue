#include <stdio.h>
int main(void)
{
    int i=0,j=0;
	for(i=2; i<=4;i++){
		for(j=1; j<=5;j++){
			printf("%d * %d = %2d   ",i,j,i*j);
		}
			printf("\n");
	}

    return 0;
}
