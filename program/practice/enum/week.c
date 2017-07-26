/* program to display day of a week using enum */
#include <stdio.h>
/* enum declaration */
enum day {sunday = 1, tuesday, wednesday};
int main()
{
    enum day d = tuesday;
    printf("The day number of tuesday %d\n", d);
    return 0;
}
