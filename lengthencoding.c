#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char str[100];
  printf("Enter the string");
  scanf("%s",str);
  int start,traverse,len,count=0;
  len = strlen(str);
  for(start=traverse=0;str[traverse]!=NULL;traverse++){
    if(str[traverse]!=str[start]){
      printf("%c%d",str[start],count);
      start=traverse;
      count=1;
    }else{
      count++;

    }

  }
  printf("%c%d",str[start],count);
  /*printf("%s\n",str );*/
  return 0;
}
