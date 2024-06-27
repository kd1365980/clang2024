#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i = 0, kazu, kai = 0;
	srand(time(0));
	rand();
	kazu = rand() % 100 + 1;
	while (1) {
		printf("”(1`100)‚ğ“ü—Í:");
		scanf("%d", &kai);
		if (kai > kazu) {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n", kai);
		}
		else if (kai < kazu) {
			printf("%d‚æ‚è‘å‚³‚¢‚Å‚·\n", kai);
		}
		else if (kai == kazu) {
			printf("“–‚½‚è!@%d‰ñ‚Å³‰ğ\n", i);
			break;
		}
		i++;
	}
}