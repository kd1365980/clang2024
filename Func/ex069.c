#include<stdio.h>
main()
{
	int a, b = 0, cnt = 0;
	
	printf("整数を入力(Ctrl+zで終了):");
	while (scanf("%d", &a) != EOF) {
		b += a;
		printf("整数を入力(Ctrl+zで終了):");
		cnt += 1;
	}
	printf("合計 = %d　　平均 = %.2f\n", b, (float)b / cnt);
}