#include<stdio.h>
main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int s, low =0, high = 10, mid;
	printf("�T���l�����:");
	scanf("%d", &s);
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		else if (s > d[mid]) {
			low = mid + 1;
		}
		else if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (low > high) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("%d\n", mid);
	}
}