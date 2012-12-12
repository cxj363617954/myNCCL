/*#1*/

#include <stdio.h>
int main(void)
{ 
	printf("*\n  ***\n****\n*****\n******  jkdflkdf \n");
	printf("@@@@@@@@@@\n@@@@@@@@@@@@@@\n@@@@@@@@@@@\n");
        printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
        printf("**********************************\n");
        printf("hello, world!\n");
        return 0 ;
}
/*output #1:*
  ***
****
*****
******  jkdflkdf 
@@@@@@@@@@
@@@@@@@@@@@@@@
@@@@@@@@@@@
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
**********************************
hello, world!
*/

/*#2*/
#include <stdio.h>
int mian(void)
{ 
	printf("*\n  ***\n****\n*****\n******  jkdflkdf \n");
	printf("@@@@@@@@@@\n@@@@@@@@@@@@@@\n@@@@@@@@@@@\n");
        printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
        printf("**********************************\n");
        printf("hello, world!\n");
        return 0 ;
}
/*output ERROR #2:In function `_start':
undefined reference to `main'
*/

/*#3*/
#include <stdio.h>
int main(void)

	printf("*\n  ***\n****\n*****\n******  jkdflkdf \n");
	printf("@@@@@@@@@@\n@@@@@@@@@@@@@@\n@@@@@@@@@@@\n");
        printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
        printf("**********************************\n");
        printf("hello, world!\n");
        return 0 ;
}
/*output ERROR #3:1
 In function 'main':
Line 4: error: expected declaration specifiers before 'printf'
Line 5: error: expected declaration specifiers before 'printf'
Line 6: error: expected declaration specifiers before 'printf'
Line 7: error: expected declaration specifiers before 'printf'
Line 8: error: expected declaration specifiers before 'printf'
Line 9: error: expected declaration specifiers before 'return'
Line 10: error: expected declaration specifiers before '}' token
Line 10: error: expected '{' at end of input
 */
 
 /*#4*/
 #include <stdio.h>
int main(void)
{
	printf("*\n  ***\n****\n*****\n******  jkdflkdf \n")
	printf("@@@@@@@@@@\n@@@@@@@@@@@@@@\n@@@@@@@@@@@\n")
        printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n")
        printf("**********************************\n")
        printf("hello, world!\n")
        return 0 
}

/*output ERROR #4:In function 'main':
Line 5: error: expected ';' before 'printf'
*/