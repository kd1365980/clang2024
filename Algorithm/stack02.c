#include<stdio.h>
#define SX 1
#define SY 1
#define GX 8
#define GY 1
int map[7][10] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{ 1, 0, 0, 0, 0, 0, 1, 0, 0, 1},
	{ 1, 0, 1, 0, 1, 0, 0, 0, 1, 1},
	{ 1, 0, 0, 1, 0, 0, 0, 1, 0, 1},
	{ 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
	{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
}
#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;
void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\nプッシュはi、ポップはoを入力:");
		key = getche();
		printf("\n");

		if (key == 'i'){
			printf("データ入力:");
			scanf("%d",&data);
			result=push(data);
			if (result == -1) {
				printf("\nスタックがいっぱいです\n\n");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\nスタックが空です\n\n");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n      現在のスタックの内容\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←  spが示している場所(現在spは%d)", sp);
		}
		printf("\n\n");
	}
	return;
}

//スタックにデータを積む
int push(int d)
{
	if (sp >= STACKSIZE) { return -1; }
	stack[sp] = d;
	sp += 1;
	return 0;
}

//スタックにデータを取り出す
int pop(int* pd)
{
	if (sp < 1) { return -1; }
	sp -= 1;
	*pd = stack[sp];
	stack[sp] = 0;
	return 0;
}