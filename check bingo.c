#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 25//N*N

int checked[25];
int count=0;

int check_bingo(int arr[N][N]);

int Mybingo[N][N];
int Combingo[N][N];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int check_bingo(int arr[5][5]){
   int x,y,sum;
   
   for(y=0;y<N;y++){
      sum=0;
      for(x=0;x<N;x++){
         sum+=arr[y][x];
      }
      if(sum==0){
         return 1;
      }
   }
   for(x=0;x<N;x++){
      sum=0;
      for(y=0;y<N;y++){
         sum+=arr[y][x];
      }
      if(sum==0){
         return 1;
      }
   }
   sum=0;
   
   for(x=0;x<N;x++){
      sum+=arr[x][x];
   }
   if(sum==0){
      return 1;
   }
   sum=0;
   for(x=0;x<N;x++){
      sum+=arr[x][N-x-1];
   }
   if(sum==0){
      return 1;
   }
   return 0;
}

