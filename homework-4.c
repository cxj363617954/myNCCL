/*比大小游戏，由计算机随机产生一个数字，用户输入数字来猜，计算机告诉用户是大还是小，直到最后用户猜对为止*/

#include<stdio.h>
#include<time.h>
int main(void)
{
	int userinput = 0;
	int computeroutput = 0;
	srand(time(NULL));
	computeroutput=rand()%100;
	do
	{
		printf("please input number:\n");
		scanf("%d",&userinput);
		if(userinput>computer)
		{
			printf("your input number is big than computer number!\n");
		}
		else if (userinput<computer)
		{
			printf("your input number is little than computer number!\n");
		}
		
	}while (userinput!=computer)
	printf(you are right!!);
	return 0 ;
}