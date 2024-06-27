#include<stdio.h>
main()
{
	int i = 0;
	char data[]="Apple";
	printf("1•¶Žš‚¸‚Â‚Å•\Ž¦\n");
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s", &data[0]);
}