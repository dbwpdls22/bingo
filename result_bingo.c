#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3

int myS,comS;
int print_winner(int sum1,int sum2)//�¸��ڸ� ����ϴ� �Լ� 
{
	int mywin, comwin;
	
	if((sum1>=M)&&(sum2<M))//�� ������� M���� ũ�� ��ǻ���� ������� M���� �۰��� ������ 
	{
		mywin=1;
		comwin=0;	
	}
	if((sum1<M)&&(sum2>=M))//�� ������� M���� �۰� ��ǻ���� ������� M���� ũ�ų� ������ 
	{
		mywin=0;
		comwin=1;
	}
	if((sum1>=M)&&(sum2>=M))//���ÿ� ���� ��ǻ����  ������� M���� ũ�ų� ������ 
	{
		mywin=1;
		comwin=1;
	}
	
	switch((comwin)*2+mywin)//��쿡 ���� ����� 
	{
		case1://mywin=1,comwin=0 
			printf("����ڰ� �̰���ϴ�.\n");
			break;
		case2://mywin=0,comwin=1 
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			break;
		case3://mywin=1,comwin=1
			printf("�����ϴ�.\n");
			break;	
		default://���� �߻� 
		    printf("XXX"); 
		    break;		
	}
	
	
}

void print_result()//������ ���������� �������� ����ϴ� �Լ� 
{
	print_bingo(myS);//���� ������ ��� 
	printf("<���� ������ ���>\n");
	print_bingo(comS);//��ǻ���� ������ ��� 
	printf("<��ǻ���� ������ ���>\n");
	
}
	

