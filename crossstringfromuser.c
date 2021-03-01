#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  char str[100];
  int size,rows,cols;
  printf("Enter a string that have odd size");
  scanf("%s",str );
  size = strlen(str);
  int k =size;
  for (rows=0;rows<size;rows++)
  {
    for(cols=0;cols<size;cols++)
    
      if(rows==cols || rows+cols==size-1)
      {
        printf("%c",str[cols]);
      }
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}
