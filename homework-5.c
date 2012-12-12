/*用户输入5个数，计算它们的平均数，并打印*/
#include<stdio.h>
int main(void)
{
	int inputnumber = 0;
	int sum = 0;
	int average = 0;
	int i ;
	printf("pleass input number: \n");
	for(i=0; i<5;i++)
	{
		scanf("%d",&inputnumber);
		sum =sum +inputnumber;
	}
	average=sum/5;
	printf("average value is \n",average);
	
	return 0 ;	
}
/*output:
pleass input number: 
average value is 
*/