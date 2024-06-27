//1102020kadai092.c
#include<stdio.h>
main()
{
	int data[10] = { 10,5,23,29,2,6,3,1,70,100 }, dai, syo, i;
	dai = syo = data[0];
	printf("data =");
	for (i = 0; i < 10; i++) {
		printf(" %d", data[i]);
		if (dai < data[i]) {
			dai = data[i];
		}
		if (syo > data[i]) {
			syo = data[i];
		}
	}
	printf("\nÅ‘å’l = %d", dai);
	printf("\tÅ¬’l = %d", syo);
}