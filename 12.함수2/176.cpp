#include<stdio.h>
#include<math.h>
void go(float n1,float n2){
	float x,y;
	int z,q;
	if(n1>n2){
		x=n1;
		y=n2;
	}
	else{
		x=n2; 
		y=n1;
	}
	z=(int)n1;
	q=(int)n2;
	printf("%d",q-z);
}
int main(void){
	float n1,n2,result1,result2,fin;
	scanf("%f %f",&n1,&n2);
	result1 = sqrt(n1);
	result2 = sqrt(n2);
	go(result1,result2);
	return 0;
}
