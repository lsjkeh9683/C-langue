#include<stdio.h>
int main(void){
	char gender;
	int age;
	printf("������ ���̸� �Է��Ͻÿ�(M/F) : ");
	scanf("%c %d",&gender,&age);
	if(gender=='M' && age>=18){
		printf("MAN");
	} 
	else if(gender=='M' && age<18){
		printf("BOY");
	}
	else if(gender=='F' && age<18){
		printf("GIRL");
	}
	else{
		printf("WOMAN");
	}
	return 0;
}
