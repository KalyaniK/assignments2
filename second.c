#include "headerFiles.h"

int main(int argc, char const *argv[])
{
  int childPid;

  childPid = fork();
  if(childPid == 0)
  {
     printf("Child_1 process created successfully.\n");
     printf("Child_1 process completed successfully.\n");

     if (fork() == 0) {
       printf("Child_2 process created successfully.\n");
       printf("Child_2 process completed successfully.\n");
     }else{
       printf("Child_1 process else part.\n");
     }

     printf("after Child_2 fork().\n");
  }
  else
  {
      printf("Parent process completed successfully.\n");
  }
  return 0;
}
