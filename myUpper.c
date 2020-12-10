#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char **argc)  {
char *str = NULL;
int i;
int x;
for(i=1; i < argv; i++) {
  str = malloc(strlen(argc[i])+1);

    if(str){
      strcpy(str, argc[i]);
      for(int x=0; x<strlen(str); x++){
        str[x] = toupper(str[x]);
      }

      printf("%s ", str);
      free(str);

    }
  }
  printf("\n");
  return 0;
}
