#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *s);
int create_file(const char *filename, char *text_content);
#endif
