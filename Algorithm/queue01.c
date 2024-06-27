#include<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;
void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;
	do {
		printf("\nエンキューはi、デキューはoを入力:");
		key = getche();
		printf("\n");

		if (key == 'i'){
			printf("データ入力:");
			scanf("%d",&data);
			result = enqueue(data);
			if (result == -1) {
				printf("\nキューがいっぱいです\n\n");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\nキューが空です\n\n");
			}
			else {
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n      現在のキューの内容\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf("←  headが示している場所(現在headは%d)", head);
		}
		if (i == tail) {
			printf("←  tailが示している場所(現在tailは%d)", tail);
		}
		printf("\n\n");
	}
	return;
}

int enqueue(int d)
{
	if ((tail + 1) % QUEUESIZE == head ) { return -1; }
	queue[tail] = d;
	tail += 1;
	tail = tail % QUEUESIZE;
	return 0;
}

int dequeue(int* pd)
{
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head += 1;
	head = head % QUEUESIZE;
	return 0;
}