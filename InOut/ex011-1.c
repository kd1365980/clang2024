#include<stdio.h>
main()
{
	char moji1 = 'A', moji2 = 'a', moji3 = '0',moji4=' ';
	printf("A : %d 0x%x   B : %d 0x%x\n" ,moji1, moji1, moji1 + 1, moji1 + 1);
	printf("C : %d 0x%x   a : %d 0x%x\n", moji1 + 2, moji1 + 2, moji2, moji2);
	printf("b : %d 0x%x   c : %d 0x%x\n", moji2 + 1, moji2 + 1, moji2 + 2, moji2 + 2);
	printf("1 : %d 0x%x   2 : %d 0x%x\n", moji3, moji3, moji3 + 1, moji3 + 1);
	printf("3 : %d 0x%x     : %d 0x%x\n", moji3 + 3, moji3 + 3, moji4, moji4);
}