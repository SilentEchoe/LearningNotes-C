#ifndef STRING_H
#define STRING_H

#include <stdbool.h>

void get_arg(const char *source, char *arg);

int str_len(const char *str);

int NewStr_index(char source[], char searchfor[]);

int getline_(char line[], int max);

#endif