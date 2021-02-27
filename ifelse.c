# include<stdio.h>
# include<stdlib.h>
int main(void){
  int num1;
  int num2;
  int num3;
  printf("Enter three Numbers");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2){
         if(num1>num3){
           printf("First number is bigger than others");
         }else{
           printf("Third number is bigger than others");
         }

    }else{
          if(num2>num3){
            printf("Second number is bigger than others");
          }else{
            printf("Third number is bigger than others");
          }

      }
      /*dfghd*/
  return EXIT_SUCCESS;
}
