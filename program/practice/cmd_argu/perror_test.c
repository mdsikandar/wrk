#include <stdio.h>

int main()
{
    FILE *fp;
   // first rename if there is any file
   rename ("file.txt", "r");
   if (fp == NULL) {
        perror("Error: ");
        return -1;
    }
    fclose(fp);
    return 0;
}

