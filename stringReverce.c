#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char str[100] = "zoho welcomes sait";
  int len;
  char spac=' ';
  len =strlen(str);
  int i,j,temp;
  for(i=j=len-1;i>=-1;i--){
    if(str[i]==' '|| i==-1){

      for(temp=i;temp<=j;temp++){

      printf("%c",str[temp]);
    }
    printf("%c",spac);
    j=i-1;
    }

  }


  return 0;
}
