#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3

int myS,comS;
int print_winner(int sum1,int sum2)//승리자를 출력하는 함수 
{
	int mywin, comwin;
	
	if((sum1>=M)&&(sum2<M))//내 빙고수가 M보다 크고 컴퓨터의 빙고수가 M보다 작가니 같을때 
	{
		mywin=1;
		comwin=0;	
	}
	if((sum1<M)&&(sum2>=M))//내 빙고수가 M보다 작고 컴퓨터의 빙고수가 M보다 크거나 같을때 
	{
		mywin=0;
		comwin=1;
	}
	if((sum1>=M)&&(sum2>=M))//동시에 나와 컴퓨터의  빙고수가 M보다 크거나 같을때 
	{
		mywin=1;
		comwin=1;
	}
	
	switch((comwin)*2+mywin)//경우에 따라 출력함 
	{
		case1://mywin=1,comwin=0 
			printf("사용자가 이겼습니다.\n");
			break;
		case2://mywin=0,comwin=1 
			printf("컴퓨터가 이겼습니다.\n");
			break;
		case3://mywin=1,comwin=1
			printf("비겼습니다.\n");
			break;	
		default://에러 발생 
		    printf("XXX"); 
		    break;		
	}
	
	
}

void print_result()//게임이 끝났을때의 빙고판을 출력하는 함수 
{
	print_bingo(myS);//나의 빙고판 출력 
	printf("<나의 빙고판 결과>\n");
	print_bingo(comS);//컴퓨터의 빙고판 출력 
	printf("<컴퓨터의 빙고판 결과>\n");
	
}
	

