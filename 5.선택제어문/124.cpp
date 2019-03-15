#include<stdio.h>
int main(void){
	int mon;
	printf("월 을 입력하시오 : ");
	scanf("%d",&mon);
	switch(mon){
		case 1:
			printf("31"); break;
		case 2:
			printf("28"); break;
		case 3:
			printf("31"); break;
		case 4:
			printf("30"); break;
		case 5:
			printf("31"); break;
		case 6:
			printf("30"); break;
		case 7:
			printf("31"); break;
		case 8:
			printf("31"); break;
		case 9:
			printf("30"); break;
		case 10:
			printf("31"); break;
		case 11:
			printf("30"); break;
		case 12:
			printf("31"); break;
		default:
			printf("error");break;
	}
	return 0;
}
