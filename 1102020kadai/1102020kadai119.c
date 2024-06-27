//1102020kadai119.c
#include<stdio.h>
main()
{
	char day[7][10] = {"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	int i, j;
	for (i = 0; i < 7; i++) {
		if (day[i][0] == 's') {
			for (j = 0; day[i][j] != '\0'; j++) {
				putchar(day[i][j]);
			}
			putchar('\n');
		}
	}
}