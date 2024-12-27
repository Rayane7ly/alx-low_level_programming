#include <stdio.h>
int main ()
{
    int a,b,c;
    for(a=0 ; a<=9 ; a++)
    {
    	for(b=1 ; b<=a ; a++)
	{
		for(c=1 ; c<=b ; c++)
		{
			if(a != 7 && b != 8 && c != 9)
			{
			printf("%d%d%d, ",a,b,c);
			}
			else 
			{
				printf("%d%d%d\n",a,b,c);
					break;
			}
			
		}
	}
    }
    return 0;
}
