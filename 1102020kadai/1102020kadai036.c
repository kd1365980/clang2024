//1102020kadai036.c
#include<stdio.h>
main()
{
	int ia, ib;
	printf("®”1?");
	scanf("%d", &ia);
	printf("®”2?");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%d‚Í%d‚æ‚è%d‘å‚«‚¢‚Å‚·\n", ia, ib,ia - ib);
	}
	else if(ia == ib){
		printf("%d‚Æ%d‚Í“™‚µ‚¢‚Å‚·\n", ia, ib);
	}
	else if (ia < ib) {
		printf("%d‚Í%d‚æ‚è%d¬‚³‚¢‚Å‚·\n", ia, ib, ib - ia);
	}
}