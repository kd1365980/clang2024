#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};
#define N 5

main()
{
	struct profile data[N];
	int i;
	for (i = 0; i < N; i++) {
		printf("%d�l�ځ@�@(���O):", i + 1);
		scanf("%s", data[i].name);
		printf("         (���N����):");
		scanf("%d%d%d", &data[i].brith[0], &data[i].brith[1], &data[i].brith[2]);
		printf("         (���t�^):");
		scanf("%s", &data[i].blood);
		printf("\n");
	}
	for (i = 0; i < N; i++) {
		if (strcmp(data[i].blood, "A") == 0) {
			printf("%s --", data[i].name);
			printf(" %d�N %02d�� %02d����", data[i].brith[0], data[i].brith[1], data[i].brith[2]);
			printf("  ���t�^ - %s�^\n", data[i].blood);
		}
	}
}