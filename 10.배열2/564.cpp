#include<stdio.h>
int main(void){
	char str[26]={0,};
	int i;
	char input;
	for(i=0;i<26;i++){
		scanf(" %c",&input);
		if(input<65||input>90){
			break;
		}
		str[input-65]++;
	}
	for(i=0;i<26;i++){
		if(str[i]>0){
			printf("%c : %d\n",'A'+i,str[i]);
		}
	}
	return 0;
}
