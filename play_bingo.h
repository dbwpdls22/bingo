#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 25
int ubingo[N][N];
int cbingo[N][N];


void erase_bingo(int arr[N][N],int number){
	int x,y;
	
	for(y=0;y<N;y++){
		if(arr[x][y]==number){
			arr[x][y]=0;
		}
		
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
}
