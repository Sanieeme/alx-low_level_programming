#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_98(int f1, char *file, char *argv);
void error_99(int f1, char *file, char *argv);
void error_100(int f1, char *file);
int main(int argc, char **argv);

#endif