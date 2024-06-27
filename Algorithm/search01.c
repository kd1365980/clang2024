#include<stdio.h>
main()
{
	int d[10] = {10,5,30,77,16,3,47,29,37,33};
	int s, i;
	printf("’Tõ’l‚ğ“ü—Í:");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d\n", i);
	}
}