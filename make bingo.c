#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 25//N*N

int Mybingo[N][N];
int Combingo[N][N];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *x, int *y){       //
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void initiate_bingo(int *array){
	int i;
	
	for(i=0;i<M;i++){
		array[i]=i+1;
	}
	for(i=0;i<M;i++){
		swamp(&array[i],&array[rand()%M]);
	}
}
void initialize(){
   srand((unsigned)time(NULL));
   initiate_bingo((int*)Mybingo);
   initiate_bingo((int*)Combingo);
}
void print_bingo(int arr[N][N]){
	int x,y;
	
	for (y=0;y<N;y++){
       for(x=0;x<N;x++){
       	printf("%7d",arr[x][y]);
        }
        printf("\n\n");
    }
}


