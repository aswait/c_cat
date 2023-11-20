#include "cat_error.h"
#include "print_file.h"

int main(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        if (print_file(argv[i]) == 1) {
            error_print(argv[i]);
        }
    }
}