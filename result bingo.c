#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 25//N*N

void initialize();
void set_rand(int *array);
void swap(int *x,int *y);

void erase_bingo(int arr[5][5],int number);
void print_bingo(int arr[5][5]);
void print_winner(int winner);

int get_number(int from);

int checked[25];
int count=0;

int check_bingo(int arr[N][N]);

int Mybingo[N][N];
int Combingo[N][N];

void print_winner(int winner){
   switch(winner){
      case1:
         printf("����ڰ� �̰���ϴ�.\n");
         break;
      case2:
          printf("��ǻ�Ͱ� �̰���ϴ�.\n");
          break;
      case3:
          printf("�����ϴ�.\n");
         break;      
      default:
         printf("eff\n");
         break;
   }
}
