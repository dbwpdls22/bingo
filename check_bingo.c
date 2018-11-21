#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3

int count_bingo(int s4[N][N])//빙고를 세는 함수 
{
	int i,j;
	int bingo=0;
	int sum=0;
	int x=0;//세로 빙고  
	int y=0;//가로 빙고  
	int xy=0;//x=y빙고(왼쪽 위에서 시작하는 대각선) 
	int yx=0;//-x=y빙고(왼쪽 아래에서 시작하는 대각선) 
	 
	
	for(j=0;j<N;j++)//세로 빙고 
	{
	    bingo=0;//bingo 초기화 
		for(i=0;i<N;i++)
		{
			bingo+=s4[i][j];//bingo=bingo+s4[i][j]
		}
		if(bingo==-N)//세로로 한 줄이 모두 -1일때 
		{
			x=x+1;  
		}
	}
	for(i=0;i<N;i++)//가로 빙고 
	{
		bingo=0;//bingo 초기화 
		for(j=0;j<N;j++)
		{
			bingo+=s4[i][j];
		}
		if(bingo==-N)//가로로 한 줄이 모두 -1일때 
		{
			y=y+1;
		}
	}
	
	bingo=0;//bingo 초기화 
	
	for(i=0;i<N;i++)//y=-x 빙고 
	{
		bingo+=s4[i][i];
	}
	if(bingo==-N)//대각선  줄이 모두 -1일때 
	{
		yx=yx+1;
	}
	bingo=0;//bingo 초기화 
	for(i=0;i<N;i++)//y=x 빙고
	{
		bingo+=s4[i][N-i-1];
	}
	if(bingo==-N)//대각선  줄이 모두 -1일때 
	{
		xy=xy+1;
	}
		
	sum=x+y+xy+yx;//빙고 줄의 갯수 
	
	return sum; 
	
}

int check_bingo_my(int s[N][N],int sum)//나의 빙고 수를 보여주는 함수 
{
	printf("\n");
	printf("----<나의 빙고:%d줄>----\n\n", sum); 
	
	if(sum<M)
	{
		return s[N][N];
	}
	if(sum>=M)
	{
		return sum;
	} 
}
int check_bingo_com(int s[N][N],int sum)//컴퓨터의 빙고 수를 보여주는 함수 
{
	printf("\n");
	printf("----<컴퓨터의 빙고:%d줄>----\n\n", sum); 
	
}
