#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3

int count_bingo(int s4[N][N])//���� ���� �Լ� 
{
	int i,j;
	int bingo=0;
	int sum=0;
	int x=0;//���� ����  
	int y=0;//���� ����  
	int xy=0;//x=y����(���� ������ �����ϴ� �밢��) 
	int yx=0;//-x=y����(���� �Ʒ����� �����ϴ� �밢��) 
	 
	
	for(j=0;j<N;j++)//���� ���� 
	{
	    bingo=0;//bingo �ʱ�ȭ 
		for(i=0;i<N;i++)
		{
			bingo+=s4[i][j];//bingo=bingo+s4[i][j]
		}
		if(bingo==-N)//���η� �� ���� ��� -1�϶� 
		{
			x=x+1;  
		}
	}
	for(i=0;i<N;i++)//���� ���� 
	{
		bingo=0;//bingo �ʱ�ȭ 
		for(j=0;j<N;j++)
		{
			bingo+=s4[i][j];
		}
		if(bingo==-N)//���η� �� ���� ��� -1�϶� 
		{
			y=y+1;
		}
	}
	
	bingo=0;//bingo �ʱ�ȭ 
	
	for(i=0;i<N;i++)//y=-x ���� 
	{
		bingo+=s4[i][i];
	}
	if(bingo==-N)//�밢��  ���� ��� -1�϶� 
	{
		yx=yx+1;
	}
	bingo=0;//bingo �ʱ�ȭ 
	for(i=0;i<N;i++)//y=x ����
	{
		bingo+=s4[i][N-i-1];
	}
	if(bingo==-N)//�밢��  ���� ��� -1�϶� 
	{
		xy=xy+1;
	}
		
	sum=x+y+xy+yx;//���� ���� ���� 
	
	return sum; 
	
}

int check_bingo_my(int s[N][N],int sum)//���� ���� ���� �����ִ� �Լ� 
{
	printf("\n");
	printf("----<���� ����:%d��>----\n\n", sum); 
	
	if(sum<M)
	{
		return s[N][N];
	}
	if(sum>=M)
	{
		return sum;
	} 
}
int check_bingo_com(int s[N][N],int sum)//��ǻ���� ���� ���� �����ִ� �Լ� 
{
	printf("\n");
	printf("----<��ǻ���� ����:%d��>----\n\n", sum); 
	
}
