#include <stdio.h>

extern int helloworld();
int main(int, char**)
{
    int a = 10;
    printf("a = %d\n", a);
    helloworld();
    return 0;
}
