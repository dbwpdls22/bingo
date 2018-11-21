#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
#include "initiate_bingo.h"
#include "check_bingo.h"
#include "play_bingo.h"
#include "result_bingo.h"


int get_number_byMe(int s3[N][N]){
    int number=0;
	int i,j; 

    while(1) {
		
    printf("1~25 사이의 숫자를 입력하세요.:");
	scanf("%d",&number); 
	
		if(number>(N*N+1)||number<1){
			printf("숫자를 다시 선택하십시오:");
		} 
	    if(number<(N*N+1) && number>0){
	    	for(i=0;i<N;i++){
		        for(j=0;j<N;j++){
			        if(s3[i][j]==number){
     			        return number;
     			    }
     			}
     		}
     		printf("이미 선택된 숫자입니다.");
		}	
}
}

int erase_number(int s[N][N],int number){
	int i,j;
	
	    for(i=0;i<N;i++){
		    for(j=0;j<N;j++){
			    if(s[i][j]==number){
     			    s[i][j]=-1;
				}
	        }
        }
	return s[i][j];
}
