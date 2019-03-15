#include <stdio.h>
#include <string.h>
int main(void)
{
    char country[100]={0,};
	int n=0, j=0, len=0;
	scanf("%s", country);
	scanf("%d", &n);
	len=strlen(country)-1;
	if(n>len){
		n=0;
	}
	else{
		n=len-n+1;
	}
	for(j=len ; j>=n  ; j--){
		printf("%c",country[j]);
	}
	return 0;
}
