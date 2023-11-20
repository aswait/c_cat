#include "cat_error.h"

void error_print(char *arg) { printf("cat: %s: No such file or directory\n", arg); }