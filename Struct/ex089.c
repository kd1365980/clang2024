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
	printf("名前を入力:");
	gets (pro.name);
	printf("生年月日を入力:");
	scanf("%d%d%d", &pro.brith[0], &pro.brith[1], &pro.brith[2]);
	printf("血液型を入力:");
	scanf("%s", &pro.blood);

	printf("\n名前ー %s\n", pro.name);
	printf("生年月日ー %d年 %d月 %d日生\n", pro.brith[0], pro.brith[1], pro.brith[2]);
	printf("血液型ー %s型\n", pro.blood);
}