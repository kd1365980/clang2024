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
		printf("��(1�`100)�����:");
		scanf("%d", &kai);
		if (kai > kazu) {
			printf("%d��菬�����ł�\n", kai);
		}
		else if (kai < kazu) {
			printf("%d���傳���ł�\n", kai);
		}
		else if (kai == kazu) {
			printf("������!�@%d��Ő���\n", i);
			break;
		}
		i++;
	}
}