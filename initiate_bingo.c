#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 3

int initiate_bingo(int s[N][N]) //������ ���� 
{  
  	int i,j,k,temp; 
  	int count=1; 
  	int randx = rand() % N; //randx�� ���� ���� �������� �ٲ�� �� 
  	int randy = rand() % N; //randy�� ���� ���� �������� �ٲ�� ��
  	 
  	for (i=0;i<N;i++){ 
  		for(j=0;j<N;j++){ 
  			s[i][j]=count++; //�迭�� ������� 1���� 25���� �Ҵ� 
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
  		    	s[i][j] = s[randx][randy]; //�迭�� �������� ���� 
  		    	s[randx][randy]=temp; //���� �迭�� �ӽ������� 
  			}
	  	}
    }
} 
  
  void print_bingo(int s[N][N])//������ ��� �Լ� 
 {
 	int i, j;
 	
 	for (i=0;i<N;i++)
	{ 
  		for(j=0;j<N;j++)
		{ 
  			printf("%2d ",s[i][j]);//�������� ���� �迭 ��� 
  		} 
  		printf("\n\n"); 
  	}  	
 }
 

 
 
 
