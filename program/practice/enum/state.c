#include <stdio.h>
/* C program to create state of working using enum */

/* Enum declaration for state */
enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
    printf("%d, %d, %d\n", Working, Failed, Freezed);
    return 0;
}

