#include<stdio.h>
int main(){
	int a,b,i;
	int shop,shop_1,shop_2,shop_3,shop_4,shop_5,shop_6,shop_7,shop_8,shop_9,shop_10,shop_11,kurti,again,discount,payment,payment_1,payment_2,payment_3,payment_4;
	int cost=0;
	char name[34];
	printf("enter your name:\t");
	scanf("%s",&name);
	
	
	printf("hello %s welcome to our shopping mall :)\n",name);
	printf("$$'' the discount sell is here''\n");
	
	printf("\n");
	
	for(i=0;i<50;i++){

	printf("        please select your option:\n");
	printf("1.> MENS WEAR:\n ");
	printf("2.> WOMENs  WEAR:\n ");
	printf("3.>  KIDS WEAR:\n ");
	
	printf("What do you like to shop:");
	scanf("%d",&shop);

	
	if(shop==1){
		printf(" Here is the option for men wear:\n");
		printf("1.> shirts\n");
		printf("2.> pants\n");
		printf("3.> T-shirts\n");
		
		printf("now enter your choice what you want in mens wear:\n");
		scanf("%d",&shop_1);
		
		if(shop_1==1){
			printf("So available brands in shirts are\n");
			printf("1.>u.s polo- Rs. 1300\n");
			printf("2.>Net play- Rs. 1800\n");
			
			printf("Which brand do you wish to shop:");
			scanf("%d",&shop_2);
			
			if(shop_2==1){
				printf("you have selected us polo- Rs.1300\n");
				printf(" total cost is 1300\n");
				cost=cost+1300;
			}
				
			if(shop_2==2){
				printf("you have selected net play Rs.1800\n");
				printf(" total cost is 1800\n");
				cost=cost+1800;	
			}

			if(shop_2>2){
				printf(" please enter valid input:\n");
				printf(" thank you:\n");
				printf(" your price till now is %d",cost);
				continue;
				
			}
			
			printf(" your total cost is %d\n",cost);
		}
			
		
		if(shop_1==2){
			printf(" so available brands in pants are:\n");
			printf("1.> bumchum-Rs.400\n");
			printf("2.> jockey-rs.450\n");
			
			printf(" which brand do you wish to buy:\n");
			scanf("%d",&shop_3);
			
			if(shop_3==1){
				printf(" you have selected bumchum Rs-400\n");
				printf(" total cost is 400\n");
				cost+=400;
			}
			
			if(shop_3==2){
				printf(" you have selected Jockey Rs-450\n");
				printf(" total cost is Rs-450\n");
				cost+=450;
			}
			if(shop_3>2){
				printf(" please enter valid input:\n");
				printf(" thank you:\n");
				printf(" your price till now is %d",cost);
				continue;
			}
			printf(" your total cost is %d\n",cost);
			
		}
		
		if(shop_1==3){
			printf(" so available brands in T-shirts  are:\n");
			printf("1.> sparky-Rs.700\n");
			printf("2.> highlander-rs.750\n");
			
			printf(" which brand do you wish to buy:\n");
			scanf("%d",&shop_4);
			
			if(shop_4==1){
				printf(" you have selected sparky-Rs.700:\n");
				printf(" your total cost is Rs.700\n");
				cost+=700;
			}
			if(shop_4==2){
				printf(" you have selected Highlander-Rs.750:\n");
				printf(" your total cost is Rs.750\n");
				cost+=750;
			}
			
			if(shop_4>2){
				printf(" please enter valid input:\n");
				printf(" your total cost is %d\n",cost);
				printf(" your price till now is %d",cost);
				continue;
			}
			
			printf(" your total cost is %d\n",cost);	
			}
			
		if(shop_1>3){
		printf(" please enter valid input\n");
		printf(" thank you\n");
		break;
		}
	}
			
	if(shop==2){
		printf(" Here is the option for women wear:\n");
		printf("1.> saree\n");
		printf("2.> kurti\n");
		
		printf("now enter your choice what you want in women wear:\n");
		scanf("%d",&shop_5);
		
		if(shop_5==1){
			printf(" so available brands in sarees  are:\n");
			printf("1.> silo-Rs.600\n");
			printf("2.> milo-rs.650\n");
			
			printf(" which brand do you wish to buy:\n");
			scanf("%d",&shop_6);
			
			if(shop_6==1){
				printf(" you have selected silo-Rs.600:\n");
				printf(" your total cost is Rs.600\n");
				cost+=600;
			}
			
			if(shop_6==2){
				printf(" you have selected Milo-Rs.650:\n");
				printf(" your total cost is Rs.650\n");
				cost+=650;
			}
			
			if(shop_6>2){
				printf(" please enter valid input:\n");
				printf(" thank you:\n");
				printf(" your price till now is %d",cost);
				continue;
			}
			printf(" your total cost is %d\n",cost);		
		}
		
		if(shop_5==2){
			printf(" so vailable brands in kurti are:\n");
			printf("1.> silu- Rs.450\n");
			printf("2.> Milu- Rs.550\n");
			
			printf(" which brand do you wish to buy:\n");
			scanf("%d",&kurti);
			
			if(kurti==1){
				printf(" you have selected silu- Rs.450\n");
				printf(" your total cost is Rs.450\n");
				cost+=450;
			}
			if(kurti==2){
				printf(" you have selected milu- Rs.450\n");
				printf(" your total cost is Rs.450\n");
				cost+=550;
			}
			
			if(kurti>2){
				printf(" please enter valid input:\n");
				printf(" thank you");
			printf(" your price till now is %d",cost);
				continue;
			}	
		}
		if(shop_5>2){
			printf(" please enter valid input:\n");
			printf(" thank you:\n");
			break;
		}
	
	}
	if(shop==3){
		printf(" Here is the option for kid wear:\n");
		printf("1.> cap\n");
		printf("2.> toy\n");
		
		printf("now enter your choice what you want in kids wear:\n");
		scanf("%d",&shop_7);
		
		if(shop_7==1){
			printf(" so available brands in caps  are:\n");
			printf("1.> Aero-Rs.200\n");
			printf("2.> Mero-rs.250\n");
			
			printf(" which brand do you wish to buy:\n");
			scanf("%d",&shop_8);
			
			if(shop_8==1){
				printf(" you have selected Aero-Rs.200:\n");
				printf(" your total cost is Rs.200\n");
				cost+=200;
			}
			if(shop_8==2){
				printf(" you have selected Mero-rs.250:\n");
				printf(" your total cost is Rs.250\n");
				cost+=250;
			}
			
			if(shop_8>2){
				printf(" please enter valid input:\n");
				printf(" thank you:\n");
				printf(" your price till now is %d",cost);
				continue;
			}
			printf(" your total cost is %d\n",cost);
		}
			
		if(shop_7==2){
			printf(" so available brands in toys  are:\n");
			printf("1.> Merce-Rs.300\n");
			printf("2.> Benz-rs.350\n");
			
			printf(" which brand do you wish to buy:\n");
			scanf("%d",&shop_9);
			
			if(shop_9==1){
				printf(" you have selected Merce-Rs.300:\n");
				printf(" your total cost is Rs.300");
				cost+=300;
			}
			if(shop_9==2){
				printf(" you have selected Benz-rs.350:\n");
				printf(" your total cost is Rs.350");
				cost+=350;
			}
			
			if(shop_9>2){
				printf(" please enter valid input:\n");
				printf(" thank you:\n");
				printf(" your price till now is %d",cost);
				continue;
			}
			printf(" your total cost is %d\n",cost);
		}	
		if(shop_7>2){
			printf(" please enter valid input:\n");
			printf(" thank you:\n");
			break;
		}
	}
	if(shop>3){
		printf(" please enter valid input\n");
		printf(" thank you\n");
		break;
	}
	printf(" Do you want to buy anything more..? Enter [1] to add items or Enter any other digit For final billing:\n");
	scanf("%d",&again);
	
	if(again!=1){
		printf(" your  cost without any discount is %d\n",cost);
		discount=cost-(cost*15)/100;
	    printf(" your Bill after 15 percent discount is %d\n", discount);
	    
	    printf(" Which payment method do you prefer??:\n");
	    printf("[1] Upi method\n");
	    printf("[2] Bank transfer\n");
	    printf("[3] Credit/ Debit/Atm card\n");
	    printf(" Enter your choice:\n");
	    
	    scanf("%d",&payment);
	    
	    if(payment==1){
	    	printf(" Please enter your Upi id:\n");
	    	scanf("%d",&payment_1);
	    	
	    	printf(" Thank you!! you have successfully done your payment:\n");	
	    	
		}
		if(payment==2){
	    	printf(" Please enter your Bank account number :\n");
	    	scanf("%d",&payment_2);
	    	
	    	printf(" Thank you!! you have successfully done your payment:\n");	
		}
		if(payment==3){
	    	printf(" Please enter your Debit or Credit or Atm card number :\n");
	    	scanf("%d",&payment_3);
	    	
	    	printf(" Thank you!! you have successfully done your payment:\n");	
		}
		printf(" thank you %s for choosing us and visit us again:\n",name);
		break;
	}
	printf(" your Purchase cost till now is %d\n",cost);
		
}
	
}

	
