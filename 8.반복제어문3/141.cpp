#include <stdio.h>
int main(){
 	int num, count = 1;
 	printf("1���� 100���������� �ϳ��� �Է��Ͻÿ� : ");
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
