#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
int ubingo[N][N];
int cbingo[N][N];

void swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

void set_rand(int *array){
	int i,j,k;
	
	for(i=0;i<M;i++){
		array[i]=i+1;
	}
	for(i=0;i<M;i++){
		swap(&array[i],&array[rand()%M]);
	}
}
void initialize(){
	srand((unsigned)time(NULL));
	set_rand((int*)ubingo);
	set_rand((int*)cbingo);
}

void print_bingo(int arr[N][N]){
	int x,y;
	
	for (y=0;y<N;y++){
		for(x=0;x<N;x++){
			if (arr[x][y]!=-1){
			printf("%7d",arr[x][y]);
	     	}
	        else {
			printf("XerrorX");
		    }
		}
		printf("\n\n");
	}
	
}
