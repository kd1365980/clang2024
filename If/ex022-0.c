#include<stdio.h>

main()
{
	int ne;
	printf("��������:");
	scanf("%d,",&ne);
	if(ne>=1926){
		if (ne >= 1989) {
			if (ne >= 2019) {
				printf("�ߘa���܂�ł�\n");
			}
			else {
				printf("�������܂�ł�\n");
			}
			printf("���a���܂�ł�\n");
		}
	}
	else{
		printf("�吳���܂�ł�\n");
	}
	printf("���� %d�΂ł�", 2024 - ne);
}