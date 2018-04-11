/* Tyler Cooper
 * 4/11/18
 * Simulating the way the operating system handles virtual memory
 */

#include <stdlib.h>
#include <stdio.h>

#define PAGES 32 // number of virtual pages in the page table
#define OFFSET  0x07FF //offset is 11
#define PAGEFRAMES 8 //pageframes
#define PLACEHOLDER 999 //placeholder for the table since 0 can't be used

typedef struct{
    unsigned short int PageFrameNum;
    unsigned short int PresentAbsentBit;
};  PageTableEntry; //define a type

int main(int argc, char **argv){

    return 0;
}