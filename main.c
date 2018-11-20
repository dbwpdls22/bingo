#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 25//N*N

int Mybingo[N][N];
int Combingo[N][N];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	
    initialize();

	print_bingo(Mybingo);
	
    return 0;
}
