#include<stdio.h>
#define N 8
main()
{
	int d[N] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;

	printf("ソート前:");
	for (i = 0; i < N; i++) {
		printf("%3d", d[i]);
	}
	printf("\n");
	printf("--------------------\n");
	//シェルソート
	gap = N / 2;
	while(gap>0){
		for (i = gap; i < N; i++) {
			for (j = i-gap; j >= 0; j-=gap) {
				int k;
				for (k = 0; k < N; k++) {
					printf("%3d", d[k]);
				}
				printf("\n");
				
				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else{
					break;
				}
			}
		}
		gap = gap / 2;
		printf("--------------------\n");
	}
	for (i = 0; i < N; i++) {
		printf("%3d", d[i]);
	}
	
}
	