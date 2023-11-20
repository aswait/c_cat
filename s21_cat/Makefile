CC=gcc
CFLAGS=-Wall -Werror -Wextra -c

all: s21_cat

s21_cat: cat_error.o print_file.o s21_cat.o
	$(CC) cat_error.o print_file.o s21_cat.o -o s21_cat

s21_cat.o:
	$(CC) $(CFLAGS) s21_cat.c

cat_error.o:
	$(CC) $(CFLAGS) cat_error.c

print_file.o:
	$(CC) $(CFLAGS) print_file.c 

clean:
	rm *.o s21_cat

rebuild: clean all
