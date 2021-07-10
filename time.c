#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc,char *argv[])
{

	int b,c;
	int pid = fork();
	//printf("%d\n",pid);
	if(pid == 0)
	{
		exec(argv[1],argv);
		if(argc == 1)
		{
			printf(1,"this is default one\n");
			exit();
		}
		else
		{
			printf(1,"exec %s has failed\n",argv[1]);
			exit();
		}
	}
	if (pid >0)
	{
		 waitx(&b,&c);
		 if(argc == 1)
			printf(1,"this is default one\n Wait Time = %d\n Run Time = %d\n",b,c);
		else
		 	printf(1, "Wait Time = %d\n Run Time = %d\n", b, c); 
	}
	exit();
}
