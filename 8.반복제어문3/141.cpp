#include <stdio.h>
int main(){
 	int num, count = 1;
 	printf("1에서 100사이정수중 하나를 입력하시오 : ");
 	scanf("%d", &num);
 	while (1){
  		if(num * count >= 100){
   			break;
  		}	
  		printf("%d ", num * count);
  		if (num * count % 10 == 0){
   			break;
  		}
  		count++;
	}
 return 0;
}
