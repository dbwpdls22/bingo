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


