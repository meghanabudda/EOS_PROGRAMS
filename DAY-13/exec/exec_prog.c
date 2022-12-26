#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
 int main()
 {
    printf("before exec\n");
    execl("../read_write_locks/rd_wr","","-al",NULL);
    printf("after exec");
    return 0;
 }