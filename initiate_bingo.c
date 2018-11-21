#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3

int initiate_bingo(int s[N][N]) //빙고판 생성 
{  
  	int i,j,k,temp; 
  	int count=1; 
  	int randx = rand() % N; //randx를 범위 내의 랜덤으로 바뀌게 함 
  	int randy = rand() % N; //randy를 범위 내의 랜덤으로 바뀌게 함
  	 
  	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			s[i][j]=count++; //배열에 순서대로 1부터 25까지 할당 
  		} 
  	} 
  	 
  	for (k=0;k<N;k++)
	{ 
  		for (i=0;i<N;i++)
		{ 
  		    for(j=0;j<N;j++)
		    { 
  		    	randx = rand() % N; 
  				randy = rand() % N;
  		    	
				temp = s[i][j]; 
  		    	s[i][j] = s[randx][randy]; //배열을 랜덤으로 섞음 
  		    	s[randx][randy]=temp; //섞인 배열을 임시저장함 
  			}
	  	}
    }
} 
  
  void print_bingo(int s[N][N])//빙고판 출력 함수 
 {
 	int i, j;
 	
 	for (i=0;i<N;i++)
	{ 
  		for(j=0;j<N;j++)
		{ 
  			printf("%2d ",s[i][j]);//랜덤으로 섞인 배열 출력 
  		} 
  		printf("\n\n"); 
  	}  	
 }
 

 
 
 
