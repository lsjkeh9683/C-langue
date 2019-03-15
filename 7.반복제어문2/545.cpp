#include<stdio.h>
int main(void){
	int num=0, count=1, three_m=0, five_m=0;
	while(count<=10){
		scanf("%d",&num);
		if(num%3==0){
			three_m++;
		}
		if(num%5==0){
			five_m++;
		}
		count++;
	}
	printf("Multiples of 3 : %d\n",three_m);
	printf("Multiples of 5 : %d",five_m);
	return 0;
}
