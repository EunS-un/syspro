#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
void intHandler();
int main()
{
    alarm(0);
    short i = 0;
    while (1) {
        sleep(1);
        i++;
        printf("Process [1] Excution\n", i);
	signal(SIGINT,intHandler);
	while (1)
		pause();
	printf("end\n");
    }
}
void intHandler(int signo)
{
     printf("Interrpt to child\n");
     printf("child Killed\n");
     printf("parent Killed\n");
     exit(0);
 }
