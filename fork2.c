#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
    int pid1, pid2, pid3;
    pid1=fork();
    pid2=fork();
    pid3=fork();
    printf("processo padre \n", getppid());
    printf("processo figlio \n ", getpid());
    if (pid1==0 || pid2==0 || pid3==0)
    {
        printf("3)sono il processo figlio con pid: %d \n", getpid());
        sleep(3);
        printf("il mio processo padre ha pid %d\n", getppid());
        exit(1); //termine processo figlio
    }
    else
    {
        printf("3)sono il processo padre con pid: %d\n", getpid());
        printf("il mio processo padre ha pid %d\n", getppid());
        exit(0); //termine processo figlio
    }
    return 0;
}
