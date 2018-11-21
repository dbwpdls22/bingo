#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
int ubingo[N][N];
int cbingo[N][N];

int check_bingo(int arr[N][N]){
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
	return arr[N][N];
}
