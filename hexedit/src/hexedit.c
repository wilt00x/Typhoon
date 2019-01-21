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

char *binary_file_to_hexadecimal(const char *file_location)
{
	int pos;
	int i, j;

	FILE *fp;
	char *buffer;
	char *new_buff;

	if((fp=fopen(file_location, "r")) == NULL)
		printf("[-] An error was occured : '%s' does not exist or can not be opened.", file_location);

	fseek(fp, 0, SEEK_END);
	pos=ftell(fp);

	fseek(fp, 0, SEEK_SET);
	buffer=calloc(pos, sizeof(char))+1;
	new_buff=calloc(pos*2, sizeof(char)+1);

	fread(buffer, sizeof(char), pos, fp);

	fclose(fp);

	for(i=0, j=0;i < strlen(buffer); i++, j+=2)
	{
		sprintf((char*)new_buff+j, "%02x", buffer[i]);
	}
	printf("%s\n\n", new_buff);

	return new_buff;
}

#endif
