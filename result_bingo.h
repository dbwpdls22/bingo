#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
int ubingo[N][N];
int cbingo[N][N];

void print_winner(int winner){
	switch(winner){
		case1:
			printf("����ڰ� �̰���ϴ�.\n");
			break;
		case2:
		    printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		    break;
		case3:
		    printf("�����ϴ�.\n");
			break;		
		default:
			printf("eff\n");
			break;
	}
}

