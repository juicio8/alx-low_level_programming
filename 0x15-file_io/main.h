#ifndef _MAIN_H_
#define _MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
size_t read_textfile(const char *filename, size_t letters);
#endif