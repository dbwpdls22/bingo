#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3
#include "initiate_bingo.h"
#include "check_bingo.h"
#include "play_bingo.h"
#include "result_bingo.h"


int get_number_byMe(int s3[N][N])   //���ڸ� �Է¹޴� �Լ� 
{
    int number=0;
	int i,j; 

    while(1) 
	{
		
        printf("1~25 ������ ���ڸ� �Է��ϼ���.: ");
     	scanf("%d",&number); //���� ���ڸ� ������ 
	
		    if(number>(N*N+1)||number<1) //���� ���� ������ ��� 
		    {
		       	printf("���ڸ� �ٽ� �����Ͻʽÿ�:\n");
		    } 
	        if(number<(N*N+1) && number>0)//���� ���� ������ ��� 
		    {
	   	        for(i=0;i<N;i++)
	            {
		            for(j=0;j<N;j++)
			    	{
			            if(s3[i][j]==number)//number�� ���� �迭�Ͻ� 
					        {
     			                return number;//number�� ��ȯ 
     			            }
     			    }
     		    }
     		    
				 printf("�̹� ���õ� �����Դϴ�.\n");//�̹� ���õ� ������ ��� 
		    }	
    }   
}

int erase_number(int s[N][N],int number)//�Էµ� ���ڸ� ����� �Լ� 
{
	int i,j;
	
	    for(i=0;i<N;i++)
		{
		    for(j=0;j<N;j++)
			{
			    if(s[i][j]==number)
				{
     			    s[i][j]=-1;//�Էµ� ���ڸ� -1�� ��ȯ 
				}
	        }
        }
        
	return s[i][j];//�迭�� ���� 
}

int get_number_byCom(int s5[N][N])//��ǻ�Ϳ� ���� ���ڸ� �Է¹޴� �Լ� 
{
    int number=0;
	int i,j; 

    while(1) 
	{
		number = 1 + rand() % (N*N); //���ڸ� �������� ���� 
    
	    if(number<(N*N+1) && number>0)
		{
	    	for(i=0;i<N;i++)
			{
		        for(j=0;j<N;j++)
				{
			        if(s5[i][j]==number)//���� �Էµ��� ���� ����
					{
     			        return number;//number�� ��ȯ 
     			    }
     			}
     		}
		}	
    }
}
