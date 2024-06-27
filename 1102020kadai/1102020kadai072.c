//1102020kadai072.c
#include<stdio.h>
main()
{
	char c;
	printf("アルファベット:");
	scanf("%c", &c);
	

	switch (c)
	{
	case 'a':
	case 'A':
		printf("America\nAustralia\n");
		break;
	case 'e':
	case 'E':
		printf("Enlsnd\n");
		break;
	case 'f':
	case 'F':
		printf("France\n");
		break;
	case 'j':
	case 'J':
		printf("Japan\n");
		break;
	}
}