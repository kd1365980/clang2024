#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, kai;
	int i = 1, Flg = 0;
	p_data = data;

	printf("data[] = %s\n", p_data);
	printf("検索文字は?  ");
	scanf("%c", &kai);
	printf("検索結果、");
	while (*p_data) {
		if (kai == *p_data++) {
			printf("%d  ", i);
			Flg = 1;
		}
		i += 1;
	}
	printf("見つからなかった");
	printf("文字目です\n");
}