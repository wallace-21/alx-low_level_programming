#!/bin/bash
gcc -c isupper.c strcat.c isdigit.c strncat.c strlen.c islower.c strcmp.c isalpha.c strstr.c strcpy.c memset.c atoi.c memcpy.c strchr.c strncpy.c puts.c strspn.c strpbrk.c abs.c putchar.c -fpic
gcc *.o -shared -o liball.so
