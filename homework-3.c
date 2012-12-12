/*用WHILE循环数1-10并打印*/
#include<stdio.h>
int main(void)
{
		int counter;
		printf("how are you NCCL!\n");
		counter=0;
		while(counter<10)
		{
			
             counter++;  // ++ 等同于： counter=counter+1
			 printf("counter = %d \n",counter);			
		}
return 0 ;
}
/*用WHILE 循环数1-10打印结果如下：
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

/*用while 循环数10-1并打印*/

#include<stdio.h>
int main(void)
{
		int counter;
		printf("how are you NCCL!\n");
		counter=11;
		while(counter>1)
		{
			
             counter--;  // -- 等同于： counter=counter-1
			 printf("counter = %d \n",counter);			
		}
return 0 ;
}
/*用WHILE 循环数10-1打印结果如下：
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

/*新增一个变量 sum，对从1加到10进行求和，打印出最后结果*/
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
			counter++;  // ++ 等同于： counter=counter+1
            sum=counter+sum;
			printf("counter = %d \n",counter);
                        
            printf("sum = %d \n",sum);			
		}
return 0 ;
}
/*打印结果为：
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
/*使用 do-while 结构，实现上面2个要求*/

#include<stdio.h>
int main(void)
{
		int counter;
        int sum = 0;
		printf("how are you NCCL!\n");
		
        counter=0;
        do
		 {
			counter++;  // ++ 等同于： counter=counter+1
            sum=counter+sum;
			printf("counter = %d \n",counter);                       
            //printf("sum = %d \n",sum);	//如果将求sum 和的打印语句写在do - while 循环体内，可以看到每次循环加数的过程。		
		 }while(counter<10);
                
         printf("sum = %d \n",sum); //如果将求SUM和的打印语句写在do - while 循环体外，直接打印出最终求和结果。

return 0 ;

}