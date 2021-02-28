#include<stdio.h>
#include<stdlib.h>
int main() {
  int choice;
  printf("Enter 1 for idli 2 for dosa 3 for parrotta 4 for pizza");
  scanf("%d",&choice);
  if(choice==1){
    printf("you are order idli");
  }else if(choice==2){
    printf("you are ordered dosa");
  }else if(choice==3){
    printf("you are ordered parrotta");
  }else if(choice==4){
    printf("you are ordered pizza");
  }else{
    printf("you are selected wrong item");
  }
  return 0;
}
