# include<stdio.h>
#include<stdlib.h>
 int main() {
  int choice;
  printf("Enter 1 for idli Enter 2 for dosa Enter 3 for parotta Enter 4 for pizza\n" );
  scanf("%d",&choice );
  switch(choice){
    case 1:
    printf("You are order idli");
    break;
    case 2:
    printf("Youare order Dosa");
    break;
    case 3:
    printf("You are order parrotta");
    break;
    case 4:
    printf("you are order pizza");
    break;
    default:
    printf("you are order somthing else");
  }
  return EXIT_SUCCESS;
}
