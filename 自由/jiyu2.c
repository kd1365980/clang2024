#include<stdio.h>

main()
{
	int e, a = 1, b, c = 1, d2;
	float d1;
	printf("(1 : +, 2 : -, 3 : *, 4 : /,5 : ��)\n");
	printf("���Z�q�����:");
	scanf("%d", &e);
	if (e < 6) {
		printf("2�̐��������:");
		scanf("%f%d", &d1, &d2);
		if (e == 1) {
			d1 = d1 + d2;
			printf("%.2f\n", d1);
		}
		else if (e == 2) {
			d1 = d1 - d2;
			printf("%.2f\n", d1);
		}
		else if (e == 3) {
			d1 = d1 * d2;
			printf("%.2f\n", d1);
		}
		else if (e == 4) {
			if ((int)d1 % d2 == 0) {
				d1 = d1 / d2;
				printf("%.2f\n", d1);
			}
			else {
				d1 = d1 / (float)d2;
				printf("%.2f\n", d1 );
			}
		}
		else if (e == 5) {
			if (d2 > 0) {
				b = d1;
				while (d2 != a) {
					d1 = d1 * b;
					a = a + 1;
				}
			}
			else
			{
				d1 = 0;
			}
			printf("%.2f\n", d1);
		}
	}
	else {
		printf("���Z�q������܂���\n");
	}
	printf("�v�Z���I��� = 0 �p�� = 1 :");
	scanf("%d", &c);
	while (c >= 1) {
		printf("(1 : +, 2 : -, 3 : *, 4 : /,5 : ��)\n");
		printf("���Z�q�����:");
		scanf("%d", &e);
		if (e < 6) {
			printf("1�̐��������:");
			scanf("%d", &d2);
			if (e == 1) {
				d1 = d1 + d2;
				printf("%.2f\n", d1);
			}
			else if (e == 2) {
				d1 = d1 - d2;
				printf("%.2f\n", d1);
			}
			else if (e == 3) {
				d1 = d1 * d2;
				printf("%.2f\n", d1);
			}
			else if (e == 4) {
				if ((int)d1 % d2 == 0) {
					d1 = d1 / d2;
					printf("%.2f\n", d1);
				}
				else {
					d1 = d1 / (float)d2;
					printf("%.2f\n", d1);
				}
			}
			else if (e == 5) {
				if (d2 > 0) {
					b = d1;
					while (d2 != a) {
						d1 = d1 * b;
						a = a + 1;
					}
				}
				else
				{
					d1 = 0;
				}
				printf("%.2f\n", d1);
			}
		}
		else {
			printf("���Z�q������܂���\n");
		}
		printf("�v�Z���I��� = 0 �p�� = 1 :");
		scanf("%d", &c);
	}
	printf("�v�Z�I���\n");
}