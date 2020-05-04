// --------------- 7.6 ---------------
// compare two files, printing the first line where they differ

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void filecmp(FILE *fin1, FILE *fin2) {
  int f1, f2;
  while (1) {
    if ((f1 = fgetc(fin1)) == EOF)
      break;
    if ((f2 = fgetc(fin2)) == EOF)
      break;

    if (f1 != f2) {
    putchar(f1);
    putchar(f2);
    break;
    }
  }
}

int main(int argc, const char *argv[]) {
  FILE *fin1, *fin2;

  if(argc == 1) { fprintf(stderr, "Usage: ./filecmp file1 file2\n");  exit(1); }

  while (--argc > 0) {
    if ((fin1 = fopen(argv[1], "r")) == NULL) {
      printf("can't open first file\n");  exit(1);
    }

    if ((fin2 = fopen(argv[1], "r")) == NULL) {
      printf("can't open second file\n");  exit(1);
    }

    filecmp(fin1, fin2);
    fclose(fin1);
    fclose(fin2);
  }
  return 0;
}

