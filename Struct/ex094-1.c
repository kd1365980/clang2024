#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	char blood[5];
};
struct day{
	int nen;
	int tuki;
	int hi;
};
#define N 5

main()
{
	struct profile data1[N];
	struct profile *p1;
	struct day data2[N];
	struct day *p2;
	p1 = &data1;
	p2 = &data2;
	int i, s;
	for (i = 0; i < N; i++) {
		printf("%d�l�ځ@�@(���O):", i + 1);
		scanf("%s", data1[i].name);
		printf("         (���N����):");
		scanf("%d%d%d", &data2[i].nen, &data2[i].tuki, &data2[i].hi);
		printf("         (���t�^):");
		scanf("%s", &data1[i].blood);
		printf("\n");
	}
	printf("���Ō������܂���(1:���܂�N 2:���܂ꌎ 3:���܂�� 4:���t�^)");
	scanf("%d", s);
	if (s == 1) {
		for (i = 0; i < N; i++) {
			if (*(p2+i)->nen == 2) {
				printf("%s --", *(p1 + i)->name);
				printf(" %d�N %02d�� %02d����", *(p2 + i)->nen, *(p2 + i)->tuki, *(p2 + i)->hi);
				printf("  ���t�^ - %s�^\n", *(p1 + i)->blood);
			}
		}
	}
	if (s == 2) {
		for (i = 0; i < N; i++) {
			if (*(p2 + i)->tuki == 2) {
				printf("%s --", *(p1 + i)->name);
				printf(" %d�N %02d�� %02d����", *(p2 + i)->nen, *(p2 + i)->tuki, *(p2 + i)->hi);
				printf("  ���t�^ - %s�^\n", *(p1 + i)->blood);
			}
		}
	}
	if (s == 3) {
		for (i = 0; i < N; i++) {
			if (*(p2 + i)->hi == 2) {
				printf("%s --", *(p1 + i)->name);
				printf(" %d�N %02d�� %02d����", *(p2 + i)->nen, *(p2 + i)->tuki, *(p2 + i)->hi);
				printf("  ���t�^ - %s�^\n", *(p1 + i)->blood);
			}
		}
	}
	if (s == 4) {
		for (i = 0; i < N; i++) {
			if (strcmp(*(p1 + i)->blood, "A") == 0) {
				printf("%s --", *(p1 + i)->name);
				printf(" %d�N %02d�� %02d����", *(p2 + i)->nen, *(p2 + i)->tuki, *(p2 + i)->hi);
				printf("  ���t�^ - %s�^\n", *(p1 + i)->blood);
			}
		}
	}
	
}