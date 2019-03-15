#include<stdio.h>
#include<string.h>
int main(void){
	char coun1[20],coun2[20];
	int len1,len2;
	scanf("%s",coun1);
	scanf("%s",coun2);
	len1=strlen(coun1);
	len2=strlen(coun2);
	printf("%d",len1+len2);
	return 0;
}
