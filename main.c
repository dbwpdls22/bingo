#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int s[N][N];
int i,j,k,temp;

int initiate_bingo()
{
	srand(time(NULL));
	int s[N][N];
	int i,j,k,temp;
	int count=1;
	int randx=1+ (rand() % N);
	int randy=1+ (rand() % N);
	
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			s[i][j]=count++;
		}
	}
	
	for(k=0;k<N;k++){
	for(i=0;i<N;i++){
	    for(j=0;j<N;j++){
		    temp=s[i][j];
		    s[i][j]=s[i][randy];
		    s[i][randy]=temp;
		}
		temp=s[i][j];
		    s[i][j]=s[randx][j];
		    s[randx][j]=temp;
	}
}
}

int print_bingo(){
	
		for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf(" %2d ", s[i][j]);
		}
		printf("\n");
	
}
int get_number_byMe(){
	
}
int main(void){
	
	initiate_bingo();
	print_bingo();
	
	return 0;
}
