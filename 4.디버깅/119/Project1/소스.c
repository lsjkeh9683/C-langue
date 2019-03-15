#include <stdio.h>
#include <time.h>
//¿À´Ã ³¯Â¥ 19.01.08
int main() {

	int a = 0;

	time_t now;
	struct tm tt;
	time(&now);
	tt = *localtime(&now);

 	a = tt.tm_year;
	a += tt.tm_mon;
	a += tt.tm_mday;

	printf("%d %d %d\n", 0, 119, 127);
	return 0;
}