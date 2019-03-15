#include<stdio.h>
int cmp(int mon,int day){
	switch(mon){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(day<=31&&day>0){
				return 1;
			}
			else{
				return 0;
			}
		case 2:
			if(day<=29&&day>0){
				return 1;
			}
			else{
				return 0;
			}
		default:
			if(day<=30&&day>0){
				return 1;
			}
			else{
				return 0;
			}
	}
	
}
int main(void){
	int mon,day;
	scanf("%d %d",&mon,&day);
	cmp(mon,day);
	if(cmp(mon,day)==1){
		printf("OK!");
	}
	else{
		printf("BAD!");
	}
	return 0;
}
