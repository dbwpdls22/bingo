#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
#include "initiate_bingo.h"
#include "check_bingo.h"
#include "play_bingo.h"
#include "result_bingo.h"
/*int initiate_bingo(int s[N][N]);
void print_bingo(int s[N][N]);

void erase_bingo(int arr[N][N],int number);
void print_winner(int winner);

int get_number_byMe(int from);

int checked[M];
int count=0;

int check_bingo(int arr[N][N]);

int ubingo[N][N];
int cbingo[N][N];*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void main(){
	int number, uwin, cwin;
	
	int myS[N][N];
	int comS[N][N]; 
	
	srand(time(NULL));
  	 
   	initiate_bingo(myS);
   	print_bingo(myS);
   	
   	
  	initiate_bingo(comS);
  	print_bingo(comS);
  	
	
	do{
		printf("--<사용자 빙고판>--\n");print_bingo(ubingo);
		
		number = get_number_byMe(0);
		
		erase_bingo(ubingo, number);
		erase_bingo(cbingo, number);
		number = get_number_byMe(1);
		
		erase_bingo(ubingo, number);
		erase_bingo(cbingo, number);
		
		uwin = check_bingo(ubingo);
		cwin = check_bingo(cbingo);
	}while((uwin==0)&&(cwin==0));
	
	printf("--<사용자 결과>--\n"); print_bingo(ubingo);
	printf("--<컴퓨터 결과>--\n"); print_bingo(cbingo);
	
	print_winner(cwin*2+uwin); 
	
}*/
/*int initiate_bingo(int s[N][N]);
void print_bingo_My(int s[N][N]);
void print_bingo_Com(int s[N][N]);
void get_number_byMe();*/

int main(int argc, char *argv[]) { 
  	
	int number; 
  	int myS[N][N];
	int comS[N][N]; 
	
	srand((unsigned)time(NULL));
  	 
   	initiate_bingo(myS);
   	print_bingo_My(myS);
   	
   	
  	initiate_bingo(comS);
  	print_bingo_Com(comS);
  	
  	number = get_number_byMe(myS);
  	erase_number(myS, number);
  	
  	check_bingo(myS);
  	check_bingo(comS);
  	
  	
  	return 0; 
  	 
  } 
