#include <stdio.h>

int main(int argc, char *argv[]) {
    // Loop through each command-line argument
    for (int i = 0; i < argc; i++) {
        // Print the argument at index i
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
