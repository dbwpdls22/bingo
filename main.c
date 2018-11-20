#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 25//N*N

int Mybingo[N][N];
int Combingo[N][N];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
   int number, mywin, comwin;
   
   initialize();
   
   do{
      printf("--<사용자 빙고판>--\n");print_bingo(Mybingo);
      
      number = get_number(0);
      
      erase_bingo(Mybingo, number);
      erase_bingo(Combingo, number);
      number = get_number(1);
      
      erase_bingo(Mybingo, number);
      erase_bingo(Combingo, number);
      
      mywin = check_bingo(Mybingo);
      comwin = check_bingo(Combingo);
   }while((mywin==0)&&(comwin==0));
   
   printf("--<사용자 결과>--\n"); print_bingo(Mybingo);
   printf("--<컴퓨터 결과>--\n"); print_bingo(Combingo);
   
   print_winner(comwin*2+mywin); 
   
}
