#include<stdio.h>
int main(void){
	int num=0,sum=0,count=0;
	printf("정수를 계속 입력하시오(0~100 벗어나면 결과 출력) : ");
	while(1){
		scanf("%d", &num);
		if(num<0||num>100){
			break;
		}
		else{
			sum=sum+num;
			count++;
		}
	}
	printf("sum : %d\n",sum);
	printf("count : %d\n",count);
	printf("avg : %.1f",(float)sum/count);
	return 0;
}
