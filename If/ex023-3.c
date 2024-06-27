#include<stdio.h>

main()
{
	int e, d1, d2;
	printf("(1 : +, 2 : -, 3 : *, 4 : /)\n");
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &e);
	if (e < 5) {
		if (e > 0) {
			printf("2‚Â‚Ì®”‚ğ“ü—Í:");
			scanf("%d%d", &d1, &d2);
			if (e == 1) {
				printf("%d", d1 + d2);
			}
			else if (e == 2) {
				printf("%d", d1 - d2);
			}
			else if (e == 3) {
				printf("%d", d1 * d2);
			}
			else if (e == 4) {
				printf("%d", d1 / d2);
			}
		}
		else {
			printf("‰‰Zq‚ª‚ ‚è‚Ü‚¹‚ñ\n");
		}
	}
	else {
		printf("‰‰Zq‚ª‚ ‚è‚Ü‚¹‚ñ\n");
	}

}