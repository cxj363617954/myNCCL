/*��WHILEѭ����1-10����ӡ*/
#include<stdio.h>
int main(void)
{
		int counter;
		printf("how are you NCCL!\n");
		counter=0;
		while(counter<10)
		{
			
             counter++;  // ++ ��ͬ�ڣ� counter=counter+1
			 printf("counter = %d \n",counter);			
		}
return 0 ;
}
/*��WHILE ѭ����1-10��ӡ������£�
how are you NCCL!
counter = 1 
counter = 2 
counter = 3 
counter = 4 
counter = 5 
counter = 6 
counter = 7 
counter = 8 
counter = 9 
counter = 10 
*/

*************************************************************************************************

/*��while ѭ����10-1����ӡ*/

#include<stdio.h>
int main(void)
{
		int counter;
		printf("how are you NCCL!\n");
		counter=11;
		while(counter>1)
		{
			
             counter--;  // -- ��ͬ�ڣ� counter=counter-1
			 printf("counter = %d \n",counter);			
		}
return 0 ;
}
/*��WHILE ѭ����10-1��ӡ������£�
how are you NCCL!
counter = 10 
counter = 9 
counter = 8 
counter = 7 
counter = 6 
counter = 5 
counter = 4 
counter = 3 
counter = 2 
counter = 1 
*/
*************************************************************************************************

/*����һ������ sum���Դ�1�ӵ�10������ͣ���ӡ�������*/
#include<stdio.h>
int main(void)
{
		int counter;
        int sum;
		printf("how are you NCCL!\n");
		sum= 0;
        counter=0;
        while(counter<10)
		{
			counter++;  // ++ ��ͬ�ڣ� counter=counter+1
            sum=counter+sum;
			printf("counter = %d \n",counter);
                        
            printf("sum = %d \n",sum);			
		}
return 0 ;
}
/*��ӡ���Ϊ��
how are you NCCL!
counter = 1 
sum = 1 
counter = 2 
sum = 3 
counter = 3 
sum = 6 
counter = 4 
sum = 10 
counter = 5 
sum = 15 
counter = 6 
sum = 21 
counter = 7 
sum = 28 
counter = 8 
sum = 36 
counter = 9 
sum = 45 
counter = 10 
sum = 55 
*/

**************************************************************************************************
/*ʹ�� do-while �ṹ��ʵ������2��Ҫ��*/

#include<stdio.h>
int main(void)
{
		int counter;
        int sum = 0;
		printf("how are you NCCL!\n");
		
        counter=0;
        do
		 {
			counter++;  // ++ ��ͬ�ڣ� counter=counter+1
            sum=counter+sum;
			printf("counter = %d \n",counter);                       
            //printf("sum = %d \n",sum);	//�������sum �͵Ĵ�ӡ���д��do - while ѭ�����ڣ����Կ���ÿ��ѭ�������Ĺ��̡�		
		 }while(counter<10);
                
         printf("sum = %d \n",sum); //�������SUM�͵Ĵ�ӡ���д��do - while ѭ�����⣬ֱ�Ӵ�ӡ��������ͽ����

return 0 ;

}