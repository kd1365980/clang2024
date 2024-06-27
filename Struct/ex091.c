#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int brith[3];
	char blood[5];
};

main()
{
	struct profile *pro;
	printf("–¼‘O‚ð“ü—Í:");
	scanf("%s", pro->name);
	printf("¶”NŒŽ“ú‚ð“ü—Í:");
	scanf("%d%d%d", &pro->brith[0], &pro->brith[1], &pro->brith[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%s", &pro->blood);

	printf("\n–¼‘O[ %s\n", pro->name);
	printf("¶”NŒŽ“ú[ %d”N %dŒŽ %d“ú¶\n", pro->brith[0], pro->brith[1], pro->brith[2]);
	printf("ŒŒ‰tŒ^[ %sŒ^\n", pro->blood);
}