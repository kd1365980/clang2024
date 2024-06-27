//1102020kadai112.c
#include<stdio.h>
main()
{
	char data1[6] = "abcde", data2[6];
	int i;
	for (i = 0; i < 6; i++) {
		data2[i] = data1[i];
	}
	printf("配列　data1 = %s\n", data1);
	printf("配列　data2 = %s", data2);
}