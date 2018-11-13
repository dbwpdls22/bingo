#include <stdio.h>
#include <stdlib.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo()
{
	int i, j;
	int s[N][N];//2차원 배열 	
	
};

int main(int argc, char *argv[]) {
	int n;
	
	n = initiate_bingo();
	
	int i,j;
	
	int a[3][5]={
	{1,2,3,4,5},
	{2,3,4,5,6},
	{3,4,5,6,7}
	};
	
	for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
