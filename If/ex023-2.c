#include<stdio.h>

main()
{
	int ne;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d,",&ne);
	ne = ne % 4;
	if (ne == 0) {
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚È‚¢‚Å‚·\n");
	}
}