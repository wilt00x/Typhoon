/*
-> '/hexedit/src/hexedit.c'

Copyright (c) 2019 B.Will.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// DEVELOPED by wil.tor

#ifndef __HEXEDIT_C_
#define __HEXEDIT_C_

#include "../include/hexedit.h"

void split_hexadecimal(char *s)
{
     int i;
     unsigned int k=1;
     char *c=(char*)&k;

    for (i=0; i < strlen(hexadecimal_str); i++)
    {
        if(*c) // little-endian
        {
            if(i == 0)
                printf("%.8x -> ", i);

            printf (" %.2x" , hexadecimal_str[i]&0xff);

            if(i == 16*(i/16) && i != 0)
                printf("\n%.8x ->  ", i);
        } else  // big-endian
        {
            if(i == 0)
                printf("%.8x -> ", i);

            printf (" %2x" , hexadecimal_str[i]&0xff);

            if(i == 16*(i/16) && i != 0)
                printf("\n%.8x -> ", i);
        }
    }
}

char *binary_to_hexadecimal(const char *file_location)
{
	int curs;
	int i, j;

	FILE *fp;
	char *buffer;
	char *ret_buffer;

	if((fp=fopen(file_location, "r")) == NULL)
		printf("[-] An error was occured : '%s' does not exist or can not be opened.", file_location);

	fseek(fp, 0, SEEK_END);
	curs=ftell(fp);

	fseek(fp, 0, SEEK_SET);
	buffer=calloc(curs, sizeof(char))+1;

	fread(buffer, sizeof(char), curs, fp);

	fclose(fp);

	ret_buffer=(char*)malloc(strlen(buffer)+1);
	snprintf(ret_buffer, strlen(buffer)+1, "%02x", buffer);

	return ret_buffer;
}

#endif
