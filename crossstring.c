#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int i,j,size=5;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
      if(i==j){
        printf("* ");
      }
      else if(i+j==size-1){
        printf("* ");
      }
      else{
        printf(" " );
      }
    }
    printf("\n");
  }
  return 0;
}
