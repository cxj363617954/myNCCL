/*�ȴ�С��Ϸ���ɼ�����������һ�����֣��û������������£�����������û��Ǵ���С��ֱ������û��¶�Ϊֹ*/

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