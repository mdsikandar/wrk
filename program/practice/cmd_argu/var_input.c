#include <stdio.h>
#include <stdarg.h>

int add (int num,...);

int main()
{
    printf("The value from first function call = " \
            "%d\n", add(2,2,3));

    printf("The value from second function call = " \
            "%d\n", add(5,1,2,3,4,5));
    return 0;
}

int add(int num,...)
{
    va_list valist;
    int sum = 0;
    int i;
    /* initialize valist for num number of arguments */
    va_start(valist, num);
    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }
    /* Clean memory reserved for valist */
    va_end(valist);
    return sum;
}
