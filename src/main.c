#include <stdio.h>

extern int prw_main(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    prw_main(argc, argv);

    return 0;
}