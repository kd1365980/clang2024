#include<stdio.h>
main()
{
	int s1, s2, s3;
	char c; float ;
	printf("���������:");
	scanf("%c", &c); 
	if (c = 'd' || c = 'D' || c = 's' || c = 'S' || c = 'g' || c = 'G' || c = 'h' || c = 'H') {
		printf("���������:");
		scanf("%d%d%d", &s1, &s2, &s3);
		switch (c) {
		case 'd':
		case 'D':
			if (s1 > s2) {
				if (s1 > s3) {
					printf("�ő�l�́@%d�@�ł�", s1);
				}
				else {
					printf("�ő�l�́@%d�@�ł�", s3);
				}
			}
			else {
				if (s2 > s3) {
					printf("�ő�l�́@%d�@�ł�", s2);
				}
				else {
					printf("�ő�l�́@%d�@�ł�", s3);
				}
			}
			break;
		case 's':
		case 'S':
			if (s1 < s2) {
				if (s1 < s3) {
					printf("�ŏ��l�́@%d�@�ł�", s1);
				}
				else {
					printf("�ŏ��l�́@%d�@�ł�", s3);
				}
			}
			else {
				if (s2 < s3) {
					printf("�ŏ��l�́@%d�@�ł�", s2);
				}
				else {
					printf("�ŏ��l�́@%d�@�ł�", s3);
				}
			}
			break;
		case 'g':
		case 'G':
			printf("���v�́@%d�@�ł�", s1 + s2 + s3);
		case 'h':
		case 'H':
			printf("���ς́@%.2f�@�ł�", (s1 + s2 + s3) / 3.0);
			break;
		}
	}
	else {
		printf("�G���[")
	}
}