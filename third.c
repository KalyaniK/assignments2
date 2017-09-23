#include "headerFiles.h"

int main(int argc, char const *argv[])
{
  if(fork() == 0)
  {
    printf("Child_1 process created successfully.\n");
    printf("Child_1 process completed successfully.\n");
  }else
  {
      printf("Parent process.\n");
  }

  if(fork() == 0)
  {
    printf("Child_2 process created successfully.\n");
    printf("Child_2 process completed successfully.\n");
  }else
  {
      printf("Parent process.\n");
  }

  if(fork() == 0)
  {
    printf("Child_3 process created successfully.\n");
    printf("Child_3 process completed successfully.\n");
  }else
  {
      printf("Parent process.\n");
  }

  printf("Parent process completed successfully.\n");
  return 0;
}
