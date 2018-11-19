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
	int x, retry;
	
	do{
		retry=0;
		printf("숫자를 선택하시오: ");
		scanf("%d",&number);
		if(number<1||number>N*N){	
			retry=1; 
		}
	}
    while(retry==1);
	
	printf("선택된 숫자: %d",number);
 } 
int erase_bingo(int s1[N][N],int s2[N][N],int number){ 

    initiate_bingo1();
    initiate_bingo2();
    iget_number_byMer);
	
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(s1[i][j]==number){
				number=0;
			}
			   
		}
	}
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(s2[i][j]==number){
				temp=s2[i][j];
				s2[i][j]==-1;
				temp;
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
	erase_bingo(s1[N][N], s2[N][N], number);
	return 0;
}
