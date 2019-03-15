#include<stdio.h>
#define pie 3.141592
int main(void){
	float radius,area;
	printf("radius : ");
	scanf("%f",&radius);
	area= radius*radius*pie;
	printf("area = %.3f",area);
	return 0;
}
