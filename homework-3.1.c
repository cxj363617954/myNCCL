//ѭ����������10����1��
#include <stdio.h>
int main(void)
{
   int cunter;

  printf("hello,myNCCL!\n");
   cunter=10;
   while (cunter>0)
    {
      cunter--;
      printf("cunter=%d\n",cunter);
     }

  return 0;

}


//����һ������ sum���Դ�1�ӵ�10������͡�
#include <stdio.h>
int main(void)
{
   int cunter;
   int sum;

  printf("hello,myNCCL!\n");
   sum=0;
   cunter=0;
   while (cunter<10)
    {
      cunter++;
      sum=cunter+sum;
      printf("cunter=%d\n",cunter);
      printf("sum=%d\n",sum);
     }

  return 0;

}