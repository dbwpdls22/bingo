int get_number(int frm){
	int number;
	int x, retry;
	
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


