#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 25//N*N
int checked[25];
int count=0;

int get_number(int frm){
	int number;
	int x, retry;
	
	do{
		retry=0;
		if(frm==0){
			 printf(">>1~25������ ���ڸ� �Է��ϼ���.:");
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
      printf(">����ڰ� '%d'�� �����߽��ϴ�.\n",number);
   }
   else{
      printf(">��ǻ�Ͱ� '%d'�� �����߽��ϴ�.\n",number);
   }
   return number;
}

void erase_bingo(int arr[5][5],int number){
   int x,y;
   
   for(y=0;y<N;y++){
      if(arr[y][x]==number){
         arr[y][x]=0;
      }
      
   }
}


