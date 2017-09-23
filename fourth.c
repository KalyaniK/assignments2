#include "headerFiles.h"

int main(int argc, char const *argv[])
{
  int child_1_pid, child_2_pid;

  child_1_pid = fork();
  if(fork() == 0)
  {
     printf("Child_1 created successfully.\n");
     sleep(5);
     printf("Child_1 process completed successfully.\n");
  }
  else
  {
      int returnStatus;
      waitpid(child_1_pid, &returnStatus, 0);  // Parent process waits here for child to terminate.

      if (returnStatus == 0)  // Verify child process terminated without error.
      {
         printf("Child_1 process terminated normally.\n");
      }

      if (returnStatus == 1)
      {
         printf("Child_1 process terminated with an error!\n");
      }
  }

  child_2_pid = fork();
  if(fork() == 0)
  {
     printf("Child_2 process created successfully.\n");
     sleep(5);
     printf("Child_2 process completed successfully.\n");
  }
  else
  {
      int returnStatus;
      waitpid(child_2_pid, &returnStatus, 0);  // Parent process waits here for child to terminate.

      if (returnStatus == 0)  // Verify child process terminated without error.
      {
         printf("Child_2 process terminated normally.\n");
      }

      if (returnStatus == 1)
      {
         printf("Child_2 process terminated with an error!\n");
      }
  }

  printf("Parent process completed successfully.\n");
  return 0;
}
