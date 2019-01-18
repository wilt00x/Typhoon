/*
-> typhoon.c

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

#include <stdio.h>
#include <stdlib.h>


/*
 * Header's project file.
 */
#include "../hexedit/src/hexedit.c"

static char *arguments_list[] =
{
	"-H",
	"--hexedit", // equivalent to '-H'

};

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		printf("tab: %c\n", arguments_list[]);
		char *buff = save_hexadecimal_format_file((const char*)argv[1]);
		printf("%s", buff);
	} else
	{
		printf("usage: %s <file_location>.\n", argv[0]);
		exit(1);
	}

	return 0;
}
