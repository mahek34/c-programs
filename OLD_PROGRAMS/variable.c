#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>
/*
variable : it is a container
*/
int main() {
    int id=2147483647; // -2147483648 to 2147483647
    long long population=454545454545LL;
    char grade='A';
    float pi=3.14f;
    printf("\n%d",id);
    printf("\n%lld",population);
    printf("\n%c",grade);
    printf("\n%f",pi);

    return 0;
}
