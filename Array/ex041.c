#include<stdio.h>
main()
{
	int i;
	float box[2], g = 0;
	for (i = 0; i <= 2; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		g += box[i];
	}
		printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·", g, g / 3);
}