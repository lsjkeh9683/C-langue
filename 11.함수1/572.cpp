#include<stdio.h>
void area(int radius){
	float r_area;
	r_area  =radius*radius*3.14;
	printf("%.2f",r_area);
}
int main(void){
	int radius;
	scanf("%d",&radius);
	area(radius);
	return 0;
}
