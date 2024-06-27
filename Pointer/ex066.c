#include<stdio.h>
main()
{
	int i;
	char* p_game[3] = { "wii","ds","playstation4" };
	char** p;
	p = p_game;
	for (i = 0; i < 3; i++) {
		printf("%s\n", *p++);
	}
}