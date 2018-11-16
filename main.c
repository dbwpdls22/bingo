#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo()
{
	srand(time(NULL));
	int s[N][N];
	int i,j,k,temp;
	int count=1;
	int randx = rand() % N*N;
	int randy = rand() % N*N;
	
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			s[i][j]=count++;
		}
	}
	
	for (k=0;k<N;k++){
		for (i=0;i<N;i++){
		    for(j=0;j<N;j++){
		    	temp = s[i][j];
		    	s[i][j] = s[randx][randy];
		    	s[randx][randy]=temp;
			}
		    
	}
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%2d",s[i][j]);
		}
		printf("\n");
	}
	return count;
	
};

int main(int argc, char *argv[]) {
	
	
	int initiate_bingo();
	
	printf("%d",initiate_bingo);
	
	return 0;
}
