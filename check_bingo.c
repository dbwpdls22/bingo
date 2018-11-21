#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25

int check_bingo(int s4[N][N]){
	int i,j,sum;
	
	for(j=0;j<N;j++){
		sum=0;
		for(i=0;i<N;i++){
			sum+=s4[i][j];//sum=sum+arr[i][j]
		}
		if(sum==-N){
			return 1;
		}
	}
	for(i=0;i<N;i++){
		sum=0;
		for(j=0;j<N;j++){
			sum+=s4[i][j];
		}
		if(sum==-N){
			return 1;
		}
	}
	sum=0;
	
	for(i=0;i<N;i++){
		sum+=s4[i][j];
	}
	if(sum==-N){
		return 1;
	}
	sum=0;
	for(i=0;i<N;i++){
		sum+=s4[i][N-i-1];
	}
	if(sum==-N){
		return 1;
	}
	return s4[N][N];
}
