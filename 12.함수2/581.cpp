#include<stdio.h>
int cmp(int num1,int num2){
	int temp1,temp2;
	if(num1<0){
		temp1=num1*-1;
	}
	if(num2<0){
		temp2=num2*-1;
	}
	if(temp1<temp2){
		return num2;
	}
	else{
		return num1;
	}
	
}
float cmp2(float num3,float num4){
	float temp3,temp4;
	if(num3<0){
		temp3=num3*-1;
	}
	if(num4<0){
		temp4=num4*-1;
	}
	if(temp3>temp4){
		return num4;
	}
	else{
		return num3;
	}
}
int main(void){
	int num1,num2;
	float num3,num4;
	scanf("%d %d",&num1,&num2);
	scanf("%f %f",&num3,&num4);
	printf("%d\n",cmp(num1,num2));
	printf("%.2f",cmp2(num3,num4));
	return 0;
}
