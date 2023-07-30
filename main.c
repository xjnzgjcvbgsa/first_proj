#include <stdio.h>
//#include "add.h"

// int a=20;
// extern int a;

#define SUM 200

int main()
{
	/*int b=30;
	printf("%d\n",a);
	{
		int c=40;
		printf("%d\n",a);
		printf("%d\n",b);
		printf("%d\n",c);
	}
	printf("%d\n",b);*/

 // printf("%d",c); error

 // printf("%d\n",a);

	int a=SUM;
	const int b=38;
	// b=28; error
    // SUM=120; error
	printf("%d\n",b);

}