#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t pid;
    if ((pid=fork())==-1)
    {
        perror("fork failed");
    }
    else if (pid!=0)
    {
        printf("pid is %ld, child process pid is %ld\n",getpid(),pid);
    }
    else
    {
        // while(1)
        // {
        //     printf("pid is %ld, parent process pid is %ld\n",getpid(),getppid());
        // }
    }
    // 
    return 0;
}