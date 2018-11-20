#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
#define SIZE2 25

void initialize();
void set_rand(int *array);
void swap(int *x,int *y);

void erase_bingo(int arr[5][5],int number);
void print_bingo(int arr[5][5]);
void print_winner(int winner);

int get_number(int from);

int checked[25];
int count=0;

int check_bingo(int arr[5][5]);

int ubingo[5][5];
int cbingo[5][5];

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(){
	int number, uwin, cwin;
	
	initialize();
	
	do{
		printf("--<사용자 빙고판>--\n");print_bingo(ubingo);
		
		number = get_number(0);
		
		erase_bingo(ubingo, number);
		erase_bingo(cbingo, number);
		number = get_number(1);
		
		erase_bingo(ubingo, number);
		erase_bingo(cbingo, number);
		
		uwin = check_bingo(ubingo);
		cwin = check_bingo(cbingo);
	}while((uwin==0)&&(cwin==0));
	
	printf("--<사용자 결과>--\n"); print_bingo(ubingo);
	printf("--<컴퓨터 결과>--\n"); print_bingo(cbingo);
	
	print_winner(cwin*2+uwin); 
}
void initialize(){
	srand((unsigned)time(NULL));
	set_rand((int*)ubingo);
	set_rand((int*)cbingo);
}
void set_rand(int *array){
	int i;
	
	for(i=0;i<SIZE2;i++){
		array[i]=i+1;
	}
	for(i=0;i<SIZE2;i++){
		swap(&array[i],&array[rand()%25]);
	}
}
void swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void erase_bingo(int arr[5][5],int number){
	int x,y;
	
	for(y=0;y<SIZE;y++){
		if(arr[y][x]==number){
			arr[y][x]=0;
		}
		
	}
}
void print_bingo(int arr[5][5]){
	int x,y;
	
	for (y=0;y<SIZE;y++){
		for(x=0;x<SIZE;x++){
			if (arr[y][x]!=-1){
			printf("%7d",arr[y][x]);
	     	}
	        else {
			printf("XerrorX");
		    }
		}
		printf("\n\n");
	}
	
}
void print_winner(int winner){
	switch(winner){
		case1:
			printf("사용자가 이겼습니다.\n");
			break;
		case2:
		    printf("컴퓨터가 이겼습니다.\n");
		    break;
		case3:
		    printf("비겼습니다.\n");
			break;		
		default:
			printf("eff\n");
			break;
	}
}
int get_number(int frm){
	int number;
	int x,retry;
	
	do{
		retry=0;
		if(frm==0){
			printf(">>1~25사이의 숫자를 입력하세요.:");
			scanf("%d",&number);
			if(number<1||number>25){
				retry=1;
			} 
		}
		else{
			number=rand()%25 +1;
		}
		if(retry==0){
			for(x=0;x<count;x++){
				if(checked[x]==number){
					retry=1;
					break;
				}
			}
		}
	}while(retry=1);
	
	checked[count++]=number;
	if(frm==0){
		printf(">사용자가 '%d'를 선택했습니다.\n",number);
	}
	else{
		printf(">컴퓨터가 '%d'를 선택했습니다.\n",number);
	}
	return number;
}
int check_bingo(int arr[5][5]){
	int x,y,sum;
	
	for(y=0;y<SIZE;y++){
		sum=0;
		for(x=0;x<SIZE;x++){
			sum+=arr[y][x];
		}
		if(sum==0){
			return 1;
		}
	}
	for(x=0;x<SIZE;x++){
		sum=0;
		for(y=0;y<SIZE;y++){
			sum+=arr[y][x];
		}
		if(sum==0){
			return 1;
		}
	}
	sum=0;
	
	for(x=0;x<SIZE;x++){
		sum+=arr[x][x];
	}
	if(sum==0){
		return 1;
	}
	sum=0;
	for(x=0;x<SIZE;x++){
		sum+=arr[x][SIZE-x-1];
	}
	if(sum==0){
		return 1;
	}
	return 0;
}
