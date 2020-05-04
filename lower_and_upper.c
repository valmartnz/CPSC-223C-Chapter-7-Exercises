// --------------- 7.1 ---------------
// converts upper case to lower or lower case to upper

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, const char *argv[]) {
  int c;

  if(argc != 2) { fprintf(stderr, "Usage: ./(lower/upper) filename\n");  exit(1); }
  FILE *fin = fopen(argv[1], "r");

  if (strcmp(argv[0], "./lower") == 0) {
    while((c = fgetc(fin)) != EOF) {
      putchar(tolower(c));
    }
    printf("\n");
  }
  else {
    while((c = fgetc(fin)) != EOF) {
      putchar(toupper(c));
    }
    printf("\n");
  }
  return 0;
}

