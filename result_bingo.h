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
			printf("사용자가 이겼습니다.\n");
			break;
		case2:
		    printf("컴퓨터가 이겼습니다.\n");
		    break;
		case3:
		    printf("비겼습니다.\n");
			break;		
		default:
			printf("eff\n");
			break;
	}
}

