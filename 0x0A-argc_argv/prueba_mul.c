#include <stdio.h>		
int main(int argc, char *argv[])	
{	    
	int x, y;
	int result;	    
	int  i = 1;


	if(argc != 3)	    
		{
			 printf("Error\n");
	         return 1;
		}
		else
		{
	    x = atoi(argv[i]);
	    y = atoi(argv[i + 1]);
		result = x * y;
	     printf("%i\n" ,result);
		}
	    return 0;
	}
