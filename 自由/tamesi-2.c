#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct shop_data {
	char name[20];
	int kosuu, kin, Flg;
};
#define N 6
#define X 6
main()
{
	struct shop_data im[X] = { {"回復薬小",10,50},{"回復薬大",0,100},{"蘇生薬",0,500},{"手榴弾",0,300},{"必中バット",0,200} };
	struct shop_data sobi[N] = { {"お金のドロップUP",0,1000,0},{"攻撃力UP",0,1500,0},{"防御力UP",0,1500,0},{"一定確率で追加攻撃",0,2200,0},{"与ダメージの10%回復",0,3000,0} };

}