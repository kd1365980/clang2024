#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;
	srand(time(0));
	rand();
	dice= rand() % 6 + 1;
	printf("ƒTƒCƒRƒ‚Í%d‚Å‚·", dice);
}