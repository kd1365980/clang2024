#include<stdio.h>

main()
{
	int ne;
	printf("西暦を入力:");
	scanf("%d,",&ne);
	if(ne>=1926){
		if (ne >= 1989) {
			if (ne >= 2019) {
				printf("令和生まれです\n");
			}
			else {
				printf("平成生まれです\n");
			}
			printf("昭和生まれです\n");
		}
	}
	else{
		printf("大正生まれです\n");
	}
	printf("現在 %d歳です", 2024 - ne);
}