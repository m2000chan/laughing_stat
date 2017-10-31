#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){

  printf("Finding file size:\n");

  struct stat storage;
  stat("thing.txt", &storage);

  printf("File Size: %jd\n", storage.st_size);

  printf("\nFinding file permission:\n");

  printf("File permissions: %d\n", storage.st_mode);

  printf("\nFinding last access times:\n");

  printf("Last access time: %s\n", ctime(&storage.st_atime));

}
