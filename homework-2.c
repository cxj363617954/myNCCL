#include<stdio.h>

extern int __executable_start;
extern int _start;

extern char etext[];
extern char edata[];
int global_a = 101010;
int global_b = 100;
int global_c = 100000;


int main(void)
{
       int local_a =10;
       int local_b =20;
       int local_c = 10000;	
 



        printf("hello,world.\n");
	
	    printf("_executable_start= %p\n",&__executable_start);
        printf("_start = %p\n",&_start);
        printf("main = %p\n\n",main);
        printf("text segment end at = %p\n",etext);
        printf("data segment end at = %p\n",edata);

        printf("****************************\n");

        printf("global a at = %p\n",&global_a);
        printf("global b at = %p\n",&global_b);
        printf("global c at = %p\n\n",&global_c);
        printf("*****************************\n");
        
        printf("local a at = %p\n",&local_a);
        printf("local b at = %p\n",&local_b);
        printf("local c at = %p\n",&local_c);



	return 0;
	
}
/*output:hello,world.
_executable_start= 0x8048000
_start = 0x8048400
main = 0x80484a4

text segment end at = 0x80486cf
data segment end at = 0x8049918
****************************
global a at = 0x8049908
global b at = 0x804990c
global c at = 0x8049910

*****************************
local a at = 0xbf71d1ec
local b at = 0xbf71d1e8
local c at = 0xbf71d1e4
结论：全局变量打印的地址是高地址;局部变量打印的地址是低地址*/

#include <stdio.h>
int global;
int main(void)
{ 
	printf("global at = %p\n",(int)(&global));
	printf("global+1 at = %p\n",(int)(&global+1));
        printf("***********************************\n");
        printf("global at = %p\n & blobal+1 at = %p\n",(int)&global,(int)(&global+1));
	return 0 ;
	
}

/*output:global at = 0x80497a8
global+1 at = 0x80497ac
***********************************
global at = 0x80497a8
 & blobal+1 at = 0x80497ac
全局变量加1后打印地址，相当于在全局变量的地址上加了4*/

#include <stdio.h>
int global_a;
char global_b;
short global_c;
float global_d;
int main(void)
{
	printf("int global_a at = %p & global_a+1 at = %p\n",(int)&global_a,(int)(&global_a+1));
	printf("char global_b at = %p & global_b+1 at = %p\n",(int)&global_b,(int)(&global_b+1));
	printf("short global_c at = %p & global_c+1 at = %p\n",(int)&global_c,(int)(&global_c+1));
	printf("float global_d at = %p & global_d+1 at = %p\n",(int)&global_d,(int)(&global_d+1));
		
	return 0 ;
	
}
/*output:int global_a at = 0x80497e8 & global_a+1 at = 0x80497ec
char global_b at = 0x80497ec & global_b+1 at = 0x80497ed
short global_c at = 0x80497e0 & global_c+1 at = 0x80497e2
float global_d at = 0x80497e4 & global_d+1 at = 0x80497e8
不同类型的全局变量加1后打印的地址均不相同*/