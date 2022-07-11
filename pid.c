#include <stdio.h>
#include <stdlib.h>
//attenzione, da scrivere ed eseguire su onlinegdb perchè è fatta con background Unix; su windows le
//fork non esistono

int main()
{
    int pid;
    printf("1) prima della fork \n");
    pid=fork();//creo processo figlio
    printf("2) dopo della fork \n");
    if (pid==0)
    {
        printf("3)sono il processo figlio \n");
        exit(1); //termine processo figlio
    }
    else
    {
        printf("3)sono il processo padre \n");
        exit(0); //termine processo figlio
    }
    return 0;
}
