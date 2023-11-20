#include "print_file.h"

int print_file(char *file_name) {
	int flag = 1;
	FILE *file = fopen(file_name, "rt");

	if (file != NULL) {
		int c = fgetc(file);
		while (c != EOF) {
			putchar(c);
			c = fgetc(file);
		}
		flag = 0;
	}
	return flag;
}