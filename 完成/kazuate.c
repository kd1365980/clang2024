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
		printf("数(1〜100)を入力:");
		scanf("%d", &kai);
		if (kai > kazu) {
			printf("%dより小さいです\n", kai);
		}
		else if (kai < kazu) {
			printf("%dより大さいです\n", kai);
		}
		else if (kai == kazu) {
			printf("当たり!　%d回で正解\n", i);
			break;
		}
		i++;
	}
}