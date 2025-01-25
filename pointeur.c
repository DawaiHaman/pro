#include <stdio.h>

int main ()
{
    char a='A';
    char b='B';
    char *p=&a;
    char *q =&b;
    char t=*p;
    *p=b;
    *q=t;
    printf("a==%c et b==%c\n",a,b);
    return 0;
}
