#include <stdio.h>
#include <stdint.h>

#define SUCCESS 0
#define ERROR -1
#define SIZE 1518
#define MAX 5
#define FREE 0
#define USED 1

typedef enum Type { 
    0x8180000000000000, 
    0x8181000000000000, 
    0x8182000000000000 } type;

typedef struct memdesc
{
    type chnk_typ;
    uint8_t mem_id;
    uint8_t status;
    uint8_t offset;
    uint8_t chunk_size;
    int (*rd_status_ptr)(struct memdesc arr);
    int (*ch_status_ptr)(struct memdesc arr); 
    int (*update_status_ptr)(struct memdesc arr);

};

int main () 
{
    int choice = 0, count = 0;
    memdesc *dcm;
    int (*mparr)[5];
    for (i = 0; i< 5 ; i++) {
        dcm[i] =  (memdesc* ) malloc((sizeof(memdesc) + 1518) );
        if (dcm[i] == NULL) {
            printf("No memory allocation\n");
            for (count = 0; count <= i; count++) {
                free(dcm[count]);
            }
            exit (0);
        }
        mparr[i] = dcm[i];
        dcm[i]->chnk_type = 0x8180000000000000;
        dcm[i]->mem_id = 0;
        dcm[i]->status = 0;
        dcm[i]->offset = sizeof(memdesc);
        dcm[i]->chunk_size = 1518;
    }
    printf("Enter the choice : 1\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1 :
            for (count = 0; count <= 5; count++) {
                free(dcm[count]);
            }
            break;
        default:
            break;
    }
    exit (0);
    return SUCCESS;
}
