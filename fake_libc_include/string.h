#ifndef __PYCPARSER_FAKE_STRING_H__
#define __PYCPARSER_FAKE_STRING_H__

unsigned long strlen(const char *str);
char *strcpy(char *destination, const char *source);
char *strncpy(char *destination, const char *source, unsigned long count);
int strcmp(const char *left, const char *right);

#endif
