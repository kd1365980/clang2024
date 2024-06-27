#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	int i, j;
	char* p_ride[] = { "Programming2","Algorithm","Programming1","C"}, *w;
	for (i = 0; i < CNT-1; i++) {
		for (j = i+1; j < CNT; j++) {
			if (strcmp(p_ride[i], p_ride[j]) > 0) {
				w=p_ride[i];
				p_ride[i]=p_ride[j];
				p_ride[j]=w;
			}
		}
	}
	for (i = 0; i < CNT; i++) {
		printf("%s\n", p_ride[i]);
	}
}