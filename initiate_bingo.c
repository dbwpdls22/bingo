#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25

int initiate_bingo(int s[N][N]){ 
  	
  	//int s[N][N]; 
  	int i,j,k,temp; 
  	int count=1; 
  	int randx = rand() % N; 
  	int randy = rand() % N; 
  	 
  	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			s[i][j]=count++; 
  		} 
  	} 
  	 
  	for (k=0;k<N;k++){ 
  		
  		
  		for (i=0;i<N;i++){ 
  		    for(j=0;j<N;j++){ 
  		    	randx = rand() % N; 
  				randy = rand() % N;
  		    	
				temp = s[i][j]; 
  		    	s[i][j] = s[randx][randy]; 
  		    	s[randx][randy]=temp; 
  			}
			/*
			temp = s[i][j]; 
  		    s[i][j] = s[randx][j]; 
  		    s[randx][j]=temp; 
			*/      
  	
	  	}
    }
} 
  
  void print_bingo_My(int s[N][N])
 {
 	int i, j;
 	
 	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			printf("%2d ",s[i][j]); 
  		} 
  		printf("\n\n"); 
  	}  	
  	printf("<나의 빙고판>\n\n");
 }
 
 void print_bingo_Com(int s[N][N])
 {
 	int i, j;
 	
 	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			printf("%2d ",s[i][j]); 
  		} 
  		printf("\n\n"); 
  	}  	
  	printf("<컴퓨터의 빙고판>\n\n");
 }
 
