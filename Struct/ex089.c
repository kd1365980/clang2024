#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};

main()
{
	struct profile pro;
	printf("���O�����:");
	gets (pro.name);
	printf("���N���������:");
	scanf("%d%d%d", &pro.brith[0], &pro.brith[1], &pro.brith[2]);
	printf("���t�^�����:");
	scanf("%s", &pro.blood);

	printf("\n���O�[ %s\n", pro.name);
	printf("���N�����[ %d�N %d�� %d����\n", pro.brith[0], pro.brith[1], pro.brith[2]);
	printf("���t�^�[ %s�^\n", pro.blood);
}