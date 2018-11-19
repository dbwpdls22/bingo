#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int s1[N][N];
int s2[N][N];
int i,j,k,temp;
int number;

int initiate_bingo1()
{
	srand(time(NULL));
	int s1[N][N];
	int i,j,k,temp;
	int count=1;
	int randx=1+ (rand() % N);
	int randy=1+ (rand() % N);
	
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			s1[i][j]=count++;
		}
	}
	
	for(k=0;k<N;k++){
	for(i=0;i<N;i++){
	    for(j=0;j<N;j++){
		    temp=s1[i][j];
		    s1[i][j]=s1[i][randy];
		    s1[i][randy]=temp;
		}
		temp=s1[i][j];
		    s1[i][j]=s1[randx][j];
		    s1[randx][j]=temp;
	}
}
    for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %2d ", s1[i][j]);
		}
		printf("\n");
}
printf("   <나의 빙고판>\n");
}
int initiate_bingo2()
{
	srand(time(NULL));
	int s2[N][N];
	int i,j,k,temp;
	int count=1;
	int randx=1+ (rand() % N);
	int randy=1+ (rand() % N);
	
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			s2[i][j]=count++;
		}
	}
	
	for(k=0;k<N+1;k++){
	for(i=0;i<N;i++){
	    for(j=0;j<N;j++){
		    temp=s2[i][j];
		    s2[i][j]=s2[i][randy];
		    s2[i][randy]=temp;
		}
		temp=s2[i][j];
		    s2[i][j]=s2[randx][j];
		    s2[randx][j]=temp;
	}
}
    for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %2d ", s2[i][j]);
		}
		printf("\n");
}
printf("   <상대의 빙고판>\n");
}
int get_number_byMe()
{
	int number;
	printf("빙고 번호를 입력하시오: ");
	scanf("%d",&number);
 } 
int erase_bingo(int s1[N][N],int s2[N][N], int number){
    int x,y; 
	
	for (x=0;x<N;x++){
		for(y=0;y<N;y++){
			if(s1[x][y]==number){
				s1[x][y]==0;
			}
			   
		}
	}
	for (x=0;x<N;x++){
		for(y=0;y<N;y++){
			if(s2[x][y]==number){
				s2[x][y]==0;
			}
			   
		}
	}
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %2d ", s1[i][j]);
		}
		printf("\n");
	}
	printf("   <나의 빙고판>\n");
		for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %2d ", s2[i][j]);
		}
		printf("\n");
}
    printf("   <상대의 빙고판>\n");
}
	
int main(void){
	initiate_bingo1();
	initiate_bingo2();
	get_number_byMe();
	erase_bingo(s1[N][N],s2[N][N],number);
	return 0;
}
