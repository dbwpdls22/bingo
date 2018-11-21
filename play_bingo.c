#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3
#include "initiate_bingo.h"
#include "check_bingo.h"
#include "play_bingo.h"
#include "result_bingo.h"


int get_number_byMe(int s3[N][N])   //숫자를 입력받는 함수 
{
    int number=0;
	int i,j; 

    while(1) 
	{
		
        printf("1~25 사이의 숫자를 입력하세요.: ");
     	scanf("%d",&number); //받은 숫자를 저장함 
	
		    if(number>(N*N+1)||number<1) //범위 외의 숫자일 경우 
		    {
		       	printf("숫자를 다시 선택하십시오:\n");
		    } 
	        if(number<(N*N+1) && number>0)//범위 내의 숫자일 경우 
		    {
	   	        for(i=0;i<N;i++)
	            {
		            for(j=0;j<N;j++)
			    	{
			            if(s3[i][j]==number)//number와 같은 배열일시 
					        {
     			                return number;//number로 반환 
     			            }
     			    }
     		    }
     		    
				 printf("이미 선택된 숫자입니다.\n");//이미 선택된 숫자일 경우 
		    }	
    }   
}

int erase_number(int s[N][N],int number)//입력된 숫자를 지우는 함수 
{
	int i,j;
	
	    for(i=0;i<N;i++)
		{
		    for(j=0;j<N;j++)
			{
			    if(s[i][j]==number)
				{
     			    s[i][j]=-1;//입력된 숫자를 -1로 변환 
				}
	        }
        }
        
	return s[i][j];//배열로 복귀 
}

int get_number_byCom(int s5[N][N])//컴퓨터에 의해 숫자를 입력받는 함수 
{
    int number=0;
	int i,j; 

    while(1) 
	{
		number = 1 + rand() % (N*N); //숫자를 랜덤으로 선택 
    
	    if(number<(N*N+1) && number>0)
		{
	    	for(i=0;i<N;i++)
			{
		        for(j=0;j<N;j++)
				{
			        if(s5[i][j]==number)//전에 입력되지 않은 숫자
					{
     			        return number;//number로 반환 
     			    }
     			}
     		}
		}	
    }
}
