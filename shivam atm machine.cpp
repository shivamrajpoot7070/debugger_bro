//    shivam atm machine
   #include<stdio.h>
   
   int main(){
   	
   	int i;
   	 int pin=12345;
   	 int accountno={12345};
   	int n,acc;
   	char you;
   	char choose;
   	int total=30000;
   	int amount2;
   	int amount1;
   	
  	
   	printf("plzz enter your card:\n\n");
   	printf("wait....processing...\n\n");
   	printf("hei shivam!! plzz enter your pin:\n\n");
   	scanf("%d",&n);
   	
   	printf("\n");
   	   
   		if(n==pin){
   			printf(" lets move to next process:\n\n");
   		}
		   else{
		   	printf("pin is wrong try next time....thank you!!\n");
		   	return 0;
		   }
		   	printf("\n");
		   
		   printf("1.> for withdraw money \n2.> for credit of money \n3.> for bank mini statement \n4.> for exit:\n\n");
		   scanf("%d",&you);
		   
		   if(you==1){
		   	 printf("from where u wants to withdraw money:\n\n");
		   }
		   if(you==2){
		   	printf("enter your amount in rupees that you wants to credit into your account\n\n");
		   	scanf("%d",&amount1);
		   
		   	printf("you have successfully credited your money now your present balance is %d \n\n",total+amount1);
		   
		   printf("thank you!!\n\n");
		   return 0;
		   }
		   
		   if(you==3){
		   	printf("wait your mini statement is printing...:\n");
		   	printf("shivam kumar your last transaction amount is 32000:\n");
		   	printf("keep using our atm services...we will be kindful:\n"); 
		   	printf("thank you!!\n");
		   	return 0;
		   }
		   
		   if(you==4){
		   	printf("sorry try next time!!\n\n");
		   	return 0;
		   }
		   
		   printf("enter 4 for credit card withdrawal or enter 5 for debit card withdrawl:\n\n");
		   scanf("%d",&choose);
		   
		   if(choose==4){
		   	 printf(" now move to next step its tym to withdraw:\n\n");
		   	 
		   	if(choose==5){
		   	 printf(" sorry debit card withdrawl process is not available:\n\n");
		    return 0;
		   }
		   printf("enter your 5 digit account no:\n\n");
	       scanf("%d",&acc);
	       
	       if(acc==accountno){
	       	printf("wait a while  processing...\n\n");
		   }

		   else{
		   	printf("account no. is wrong.... thank you!!\n\n");
		   		return 0;
		   }
		   
		   
		   printf("enter your amount that which u wants to withdraw\n\n");
		   scanf("%d",&amount2);
		   
		   printf("wait!! your payment is processing:\n\n");
		   
		   if(amount2>total){
		   	printf("sorry!! not enough balance:\n\n");
		   }
		   else{
		   
		   printf("you have successfully withdrawd ur money and now your remaining amount is %d\n\n",total-amount2);
		   
		   printf("thank you!!\n\n");
		   
		   return 0;
	}
		   
		   
		   
		   
		   
}
}

   	
   
