#include<stdio.h>
#include<string.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syohin_data* p;
	int i;
	p = syohin;
	for (i = 0; i < 3; i++) {
		printf("商品名 : %s\t", syohin[i].name);
		printf("単価 : %d\t", syohin[i].tanka);
		printf("個数 : %d\t", syohin[i].kosuu);
		printf("金額 : ￥%d\n", (p + i)->tanka * (p + i)->kosuu);
	}
}