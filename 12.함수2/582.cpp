#include<stdio.h>
#include<math.h>
float formula(int area){
	float r;
	r=sqrt(area/3.14);
	return r;
}
int main(void){
	int area;
	scanf("%d", &area);
	printf("%.2f",formula(area));
	return 0;
}
