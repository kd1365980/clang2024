#include<stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, kai;
	int i = 1, Flg = 0;
	p_data = data;

	printf("data[] = %s\n", p_data);
	printf("ŒŸõ•¶š‚Í?  ");
	scanf("%c", &kai);
	printf("ŒŸõŒ‹‰ÊA");
	while (*p_data) {
		if (kai == *p_data++) {
			printf("%d  ", i);
			Flg = 1;
		}
		i += 1;
	}
	printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	printf("•¶š–Ú‚Å‚·\n");
}