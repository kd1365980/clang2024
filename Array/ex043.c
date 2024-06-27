#include<stdio.h>
main()
{
	int i = 0;
	char data[] = "orange";
	printf("•¶š—ñ:%s\n",&data[0]);
	while (data[i] != '\0') {
		i++;
	}
	printf("•¶š”‚Í%d•¶š", i);
}