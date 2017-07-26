#include <stdio.h>
#include "my_header.h"

#define SIZE 1518
typedef struct memdesc {
    int mem_id;
    int status;
    int offset_size;
    int chunk_size;
    char type[3];
    void (*rd_status_ptr)(struct memdesc arr);
    void (*ch_status_ptr)(struct memdesc arr);
    int (*update_chunk)(int);
};

void rd_status(struct memdesc arr)
{
    int me_id;
    printf("Enter the mem_id to check status\n");
    me_id = scan_of_single_int(me_id);
    printf("%d\n", arr[me_id].status);

}

void ch_status (struct memdesc arr)
{
    int me_id;
    printf("Enter the memory id to change the status\n");
    me_id = scan_of_single_int(me_id);
    arr[me_id].status |= 1;
    printf("Changed status%d\n", arr[me_id].status);
}

int main()
{
    int choice, i;
    int *buffer;
    buffer = (int*) malloc(SIZE * 5);
    buffer[0] = 0x8182000000000000;
    buffer[1] = 0x8180000000000000; 
    buffer[2] = 0x8182000000000000;
    buffer[3] = 0x8182000000000000;
    buffer[4] = 0x8180000000000000;
    struct memdesc *arr = malloc((sizeof(struct memdesc) + SIZE) * 5);
    for (i = 0; i < 5; i++) {
        arr[i].mem_id = 0;
        arr[i].status = 0;
        arr[i].offset_size = sizeof(struct memdesc);
        arr[i].chunk_size = ;
        arr[i].type = "GE";
    }

    printf("Enter the options to perform operation\n");
    printf("1: To get free buffer and marked it as used\n");
    printf("2: To modify the chunk content\n");
    printf("3: To display the content of chunk\n");
    printf("4: Release the particulr buffer\n");
    printf("5: free all memory");
    choice = scan_for_single_int(choice);
    switch (choice) {
        case 1:
            break;
        case 2:
            break
        case 3 :

                break;
        case 4 :
                break;
        case 5 :
                break;
        default :
                printf("Invalid input\n");
                exit (0);
    }
    return SUCCESS;
}
