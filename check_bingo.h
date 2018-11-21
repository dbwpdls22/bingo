#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
int ubingo[N][N];
int cbingo[N][N];

int check_bingo(int arr[N][N]){
	int i,j,sum;
	
	for(j=0;j<N;j++){
		sum=0;
		for(i=0;i<N;i++){
			sum+=arr[i][j];
		}
		if(sum==-N){
			return 1;
		}
	}
	for(i=0;i<N;i++){
		sum=0;
		for(j=0;j<N;j++){
			sum+=arr[i][j];
		}
		if(sum==-N){
			return 1;
		}
	}
	sum=0;
	
	for(i=0;i<N;i++){
		sum+=arr[i][j];
	}
	if(sum==-N){
		return 1;
	}
	sum=0;
	for(i=0;i<N;i++){
		sum+=arr[i][N-i-1];
	}
	if(sum==-N){
		return 1;
	}
	return arr[N][N];
}
