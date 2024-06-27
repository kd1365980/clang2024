#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* p_a;
	float *p_b;
	int ga = 0, i;
	float gb = 0;

	p_a = a;
	p_b = b;
	for (i = 0; i < 6; i++) {
		ga += *p_a;
		p_a++;
	}
	printf("配列a   合計 = %3d      平均 = %3.2f \n", ga, ga / 6.0);
	
	for (i = 0; i < 4; i++) {
		gb += *p_b;
		p_b++;
	}
	printf("配列b   合計 = %3.2f   平均 = %3.2f \n", gb, gb / 4.0);
}