#include <stdio.h>

typedef struct tag
{
	int y;
	double dec;
}List;

struct stu
{
	int x;
	int count;
	char name[20];
	char falg;
	List T;
	struct stu* nest;
};

int main()
{
	struct stu s={5,10,"ÕÅÈı",'h',{58,2.713},NULL};
	printf ("%d\n",s.x);
	printf ("%s\n",s.name);
	printf ("%p\n",s.nest);
}