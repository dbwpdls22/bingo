#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo()
{

}
int main(){
	srand(time(NULL));
	int s[5][5];
	int i,j,k,temp;
	int count=1;
	int randx=1+ (rand() % 5);
	int randy=1+ (rand() % 5);
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			s[i][j]=count++;
		}
	}
	
	for(k=0;k<5;k++){
	for(i=0;i<5;i++){
	    for(j=0;j<5;j++){
		    temp=s[i][j];
		    s[i][j]=s[i][randy];
		    s[i][randy]=temp;
		}
		temp=s[i][j];
		    s[i][j]=s[randx][j];
		    s[randx][j]=temp;
	}
}
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf(" %2d ", s[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
