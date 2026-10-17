#ifndef __PYCPARSER_FAKE_STDLIB_H__
#define __PYCPARSER_FAKE_STDLIB_H__

void *malloc(unsigned long size);
void free(void *ptr);
int atoi(const char *str);
long atol(const char *str);
int rand(void);
void srand(unsigned int seed);

#endif
