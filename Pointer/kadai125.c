#include<stdio.h>
main()
{
	int data[] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_d, i;

	p_d = data;
	printf("�|�C���^���Œ�ŕ\��\n");
	printf("�z�� data[] = ");
	for (i = 0; *(p_d + i) != -999; i++) {
		printf("%d  ", *(p_d + i));
	}

	printf("\n�|�C���^��ω������ĕ\��\n");
	
	printf("�z�� data[] = ");
	while (*p_d != -999) {
		printf("%d  ", *p_d);
		p_d += 1;
	}
}