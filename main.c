#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3
#include "initiate_bingo.h"
#include "check_bingo.h"
#include "play_bingo.h"
#include "result_bingo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum,sum1,sum2;
int mysum, comsum;
int number; 
int myS[N][N];
int comS[N][N]; 
int count;//�� Ƚ�� 
int main(int argc, char *argv[])
{ 

	srand((unsigned)time(NULL));//�������� �����Ҷ� ���� ���Ӱ� ������ �� 
  	 
   	initiate_bingo(myS);
   	print_bingo(myS);
   	initiate_bingo(comS);

   	
   	do//while�� ������ �ش���� ���������� ���� 
	{ 
  	number = get_number_byMe(myS);
  	erase_number(myS, number);
  	print_bingo(myS);
  	printf("----<���� ������>----  \n");
  	erase_number(comS, number);
  	
  	sum = count_bingo(myS);
    sum = count_bingo(comS);  
    
	check_bingo_my(myS, sum);
	check_bingo_com(comS, sum2);
	
	count=count+1; 
  	
  	number = get_number_byCom(comS);
  	erase_number(myS, number);
  	print_bingo(myS);
  	printf("----<���� ������>----\n");
  	erase_number(comS, number);
  	
  	sum1 = count_bingo(myS);
    sum2 = count_bingo(comS);    
   
   	check_bingo_my(myS, sum1);
   	check_bingo_com(comS, sum2);
   	
   	count=count+1;
    }
    
  	while(sum1<M&&sum2<M);
  	{
  		print_winner(sum1,sum2);
		void print_result();
	}
	
	printf("%d��° �Ͽ��� �¸��Ͽ����ϴ�.",count);//���° �Ͽ��� �¸��ߴ��� ������ 
	
	return 0;//���� ���� 
	
}
	   
  	 
   
