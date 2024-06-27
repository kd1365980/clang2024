#include<stdio.h>
main()
{
	FILE* fp;
	char str[256];
	int i;
	fp = fopen("file02.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(fp, "%s", str);
		printf("%d:%s\n", i, str);
	}
	fclose(fp);
}