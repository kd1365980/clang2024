#include<stdio.h>
main()
{
	int i = 0;
	char data[] = "orange";
	printf("������:%s\n",&data[0]);
	while (data[i] != '\0') {
		i++;
	}
	printf("��������%d����", i);
}