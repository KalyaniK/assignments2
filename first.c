#include "headerFiles.h"

int main(int argc, char const *argv[])
{
  int childPid;

  childPid = fork();
  if(childPid == 0)
  {
     printf("Child process created successfully.\n");
     sleep(5);
     printf("Child process completed successfully.\n");
  }
  else
  {
      int returnStatus;
      waitpid(childPid, &returnStatus, 0);  // Parent process waits here for child to terminate.

      if (returnStatus == 0)  // Verify child process terminated without error.
      {
         printf("The child process terminated normally.\n");
      }

      if (returnStatus == 1)
      {
         printf("The child process terminated with an error!\n");
      }

      printf("Parent process completed successfully.\n");
  }
  return 0;
}
