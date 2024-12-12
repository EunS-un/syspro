#include <stdio.h>
#include <signal.h>
#include <sys/types.h>
int main()
{
	int pid1, pid2, pid3;
	pid1 = fork();
	if(pid1==0){
		printf("Hello\n",getpid());
		exit(0);
	}
	pid2 = fork();
	if(pid2==0){
		printf("Hello\n",getpid());
		exit(0);
	}
	pid3 = fork();
    if(pid3==0){
        printf("Hello\n",getpid());
        exit(0);
    }
	printf("Hello\n",getpid());
	return 0;
}


