#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3
#include "initiate_bingo.h"
#include "check_bingo.h"
#include "play_bingo.h"
#include "result_bingo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum;
int number; 
int myS[N][N];
int comS[N][N]; 
int main(int argc, char *argv[]) { 
   
	
	srand((unsigned)time(NULL));
  	 
   	initiate_bingo(myS);
   	print_bingo(myS);
   	initiate_bingo(comS);
   	
   	do{ 
  	number = get_number_byMe(myS);
  	erase_number(myS, number);
  	print_bingo(myS);
  	erase_number(comS, number);
  	
  	sum = count_bingo(myS);
    sum = count_bingo(comS);  
    
	check_bingo(myS, sum);
  	
  	number = get_number_byCom(comS);
  	erase_number(myS, number);
  	print_bingo(myS);
  	erase_number(comS, number);
  	
  	sum = count_bingo(myS);
    sum = count_bingo(comS);    
    
	check_bingo(myS, sum);
	
}
    
  	while(1);
  	{
  		if(sum>=M){
  			return 0; 
  			
		  }
	}
}
	   
  	 
   
