#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 3

int initiate_bingo(int s[N][N]) //빙고판 생성 
{  
  	int i,j,k,temp; 
  	int count=1; 
  	int randx = rand() % N; //randx를 범위 내의 랜덤으로 바뀌게 함 
  	int randy = rand() % N; //randy를 범위 내의 랜덤으로 바뀌게 함
  	 
  	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			s[i][j]=count++; //1부터 25까지 할당 
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
  		    	s[randx][randy]=temp; 
  			}
	  	}
    }
} 
  
  void print_bingo(int s[N][N])//빙고판 출력 함수 
 {
 	int i, j;
 	
 	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			printf("%2d ",s[i][j]); 
  		} 
  		printf("\n\n"); 
  	}  	
  	printf("<나의 빙고판>\n");
 }
 
 
 
