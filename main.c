#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25

void initialize();
void set_rand(int *array);
void swap(int *x,int *y);

void erase_bingo(int arr[N][N],int number);
void print_bingo(int arr[N][N]);
void print_winner(int winner);

int get_number(int from);

int checked[M];
int count=0;

int check_bingo(int arr[N][N]);

int ubingo[N][N];
int cbingo[N][N];

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main(){
	int number, uwin, cwin;
	
	initialize();
	
	do{
		printf("--<����� ������>--\n");print_bingo(ubingo);
		
		number = get_number(0);
		
		erase_bingo(ubingo, number);
		erase_bingo(cbingo, number);
		number = get_number(1);
		
		erase_bingo(ubingo, number);
		erase_bingo(cbingo, number);
		
		uwin = check_bingo(ubingo);
		cwin = check_bingo(cbingo);
	}while((uwin==0)&&(cwin==0));
	
	printf("--<����� ���>--\n"); print_bingo(ubingo);
	printf("--<��ǻ�� ���>--\n"); print_bingo(cbingo);
	
	print_winner(cwin*2+uwin); 
}
void initialize(){
	srand((unsigned)time(NULL));
	set_rand((int*)ubingo);
	set_rand((int*)cbingo);
}
void set_rand(int *array){
	int i;
	
	for(i=0;i<M;i++){
		array[i]=i+1;
	}
	for(i=0;i<M;i++){
		swap(&array[i],&array[rand()%M]);
	}
}
void swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void erase_bingo(int arr[N][N],int number){
	int x,y;
	
	for(y=0;y<N;y++){
		if(arr[x][y]==number){
			arr[x][y]=0;
		}
		
	}
}
void print_bingo(int arr[N][N]){
	int x,y;
	
	for (y=0;y<N;y++){
		for(x=0;x<N;x++){
			if (arr[x][y]!=-1){
			printf("%7d",arr[x][y]);
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
			printf("����ڰ� �̰���ϴ�.\n");
			break;
		case2:
		    printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		    break;
		case3:
		    printf("�����ϴ�.\n");
			break;		
		default:
			printf("eff\n");
			break;
	}
}
int get_number_byMe(int frm){
	int number=0;
	int i,j; 
	int x,temp,alreadynumber;
	
	while(1){
		printf("1~25 ������ ���ڸ� �Է��ϼ���.:");
		scanf("%d",&number); 
		
		if(number>25||number<1){
			printf("���ڸ� �ٽ� �����Ͻʽÿ�:");
			scanf("%d",&number); 
		}
		else{
			for(i=0;i<N;i++){
				for(j=0;j<N;j++){
					if(ubingo[i][j]==number){
						ubingo[i][j]=temp;
						alreadynumber=1;
					}
				}
			}
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{
					if(cbingo[i][j]==number){
						cbingo[i][j]=temp;
					
					}
				}
			}
		}
		if(alreadynumber==1){
       break;
	}

	else{
		printf("�̹� �Է��� �����Դϴ�. �ٽ� �������ֽʽÿ�:");
	}
}
int check_bingo(int arr[N][N]){
	int x,y,sum;
	
	for(y=0;y<N;y++){
		sum=0;
		for(x=0;x<N;x++){
			sum+=arr[y][x];
		}
		if(sum==0){
			return 1;
		}
	}
	for(x=0;x<N;x++){
		sum=0;
		for(y=0;y<N;y++){
			sum+=arr[y][x];
		}
		if(sum==0){
			return 1;
		}
	}
	sum=0;
	
	for(x=0;x<N;x++){
		sum+=arr[x][x];
	}
	if(sum==0){
		return 1;
	}
	sum=0;
	for(x=0;x<N;x++){
		sum+=arr[x][N-x-1];
	}
	if(sum==0){
		return 1;
	}
	return arr[N];
}
