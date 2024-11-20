#include <stdio.h>
int main(int argc, char *argvp[])
{
	int child, pid, status;
	pid = fork();
	if(pid ==0){
		execvp(argv[1],&argv[1]);
		fprintf(stderr,"%s:process fail\n",argv[1]);
	}
	else{
		child = wait(&status);
		printf("[%d] child process %d end", getpid(), pid);
		printf("\t end code %d \n", status >> 8);
	}
}
