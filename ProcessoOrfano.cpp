#include <iostream>
#include <unistd.h>
using namespace std;
main()
//esercizio per mostrare un processo orfano
{
 	 pid_t rf, rff;
 	 cout<<"operazione prima della fork \n";
 	 rf=fork();
 	 if (rf==0)
 	 {
 	 	rff=fork();
 	 	if (rff==0)
 	 	{
 	 		cout<<"sono il figlio con il PID "<<getpid()<<"e dormo un po'..."<<endl;
 	 		sleep(10);
 	 		cout<<"sto uscendo..";
 	 	}
	  else cout<<"sono il padre con PID "<<getppid()<<"ed esco senza aspettare mio figlio"<<endl;
     }
}

