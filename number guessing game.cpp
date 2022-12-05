   // i will make a number guessing game
   
   #include<stdio.h>
   #include<stdlib.h>
   #include<time.h>
   
   int main(){
   	
   	int number,guess,nguesses=1;
   	srand(time(0));
   	number=rand()%100+1;    // iska mtlb 1 se 100 tk guess kro computer agr %1000 +1 rhta to 1 se 1000 hota
   	int i;
   	
   	//printf("%d\n",number);    // isko print ni krna qki isko hide krna h
   	
   	 // do while loop ka use hua kyuki 1 brr to run krana hi h
   		 
       do{
   		 
   		 printf("guess your between 1 and 100 :\n\n");
   		scanf("%d",&guess);
   		
   		if(guess>number){
   			printf("guess lil bit lower number please!! \n\n");
		   }
   	   else if(guess<number){
   			printf("guess lil bit higher number please!! \n\n");
		   }
		else{
		   	printf("congrats!! you guessed it in %d attempts\n\n",nguesses);
		   }
   		nguesses++;
   		
		  }
		  while(guess!=number);
		  return 0;
   		
   		
	   }
   	
   	
   	
   	
   
