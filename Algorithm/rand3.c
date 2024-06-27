#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, i, c = 0;
	int a[30];
	for (i = 0; i < 30; i++) {
		a[i] = i + 1;
	}
	srand(time(0));
	rand();
	kazu = rand() % 100 + 1;
	for (i = 0; i < 30; i++) {
		if (kazu == a[i]) {
			printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«!");
			c += 1;
			break;
		}
	}
	if(c == 0) {
		printf("’ÊíUŒ‚");
	}
}