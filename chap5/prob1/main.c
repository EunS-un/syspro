#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
	int fd;

	if((fd = open(argv[1], O_RDWR)) == -1)
		printf("파일 열기 오류n");
	else printf("file %s Open Sucess : %d\n",argv[1], fd);

	close(fd);
	exit(0);
}
