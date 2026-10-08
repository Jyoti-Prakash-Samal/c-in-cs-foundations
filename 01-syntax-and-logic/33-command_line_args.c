#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("No additional arguments provided.\n");
        printf("Usage: ./program_name arg1 arg2\n");
        return 0;
    }

    printf("Total arguments passed: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}