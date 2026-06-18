#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  while (1)
  {
  
  
    int PlayerChoice,ComputerChoice;
    printf("== ROCK PAPER SCISSORS==\n");
    printf("Choose 0 for ROCK\n");
    printf("Choose 1 for PAPER\n");
    printf("Choose 2 for SCISSORS\n");
    printf("Your Choice\n");
    scanf("%d",&PlayerChoice);
    
    if(PlayerChoice<0||PlayerChoice>2){
      printf("Please enter a valid choice and try again\n");
       return 1;
      }
            ComputerChoice=rand() %3;

      printf("\nYou Choice:");
      if(PlayerChoice==0){
        printf("ROCK\n");
        }
  else if(PlayerChoice==1){
    printf("PAPER\n");
    }
    else{
      printf("SCISSORS\n");
      }
      
printf("\nComputer Choose:");
    if(ComputerChoice==0){
      printf("ROCK\n");
    
      }
   else if(ComputerChoice==1){
     printf("PAPER\n");
     }
  else{
    printf("SCISSORS");
    }
  
  printf("==RESULT IS==\n");
  if(PlayerChoice==ComputerChoice){
    printf("It's a tie\n");
    }
    else if((PlayerChoice==0 && ComputerChoice==2)||
    (PlayerChoice==2 && ComputerChoice==1)||
    (PlayerChoice==1 && ComputerChoice==0)){
      printf("Congratulations You Win!\n");
      }
    else{
      printf("Computer Win better luck next time\n");
      }
}
  return 0;
  }