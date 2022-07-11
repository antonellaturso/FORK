#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//attenzione...esercizi da svolgere con onlinegdb; le fork non girano su windows
int main()
{
    int pid1, pid2, pid3;

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
