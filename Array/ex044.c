#include<stdio.h>
main()
{
	int i;
	char moji1[80], moji2[80], w[80];
	printf("(79•¶ŽšˆÈ“à) •¶Žš—ñ1‚ð“ü—Í:");
	scanf("%s", &moji1[0]);
	printf("(79•¶ŽšˆÈ“à) •¶Žš—ñ2‚ð“ü—Í:");
	scanf("%s", &moji2[0]);
	printf("moji1 = %s    moji2 = %s\n", &moji1[0], &moji2[0]);
	for (i = 0; w[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = w[i]; i++);
	//while (1) {
		//w[i] = moji1[i];
		//moji1[i] = moji2[i];
		//moji2[i] = w[i];
		//i++;
		//if (moji1[i] != '\0' && moji2[i] != '\0') {
			//break;
		//}
	//}
	printf("\n“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1 = %s    moji2 = %s\n", &moji1[0], &moji2[0]);
}