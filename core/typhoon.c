#include <stdio.h>
#include <stdlib.h>


/* 
 * Header's project file.
 */
#include "../hexedit/src/hexedit.c"

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		char *buff = save_hexadecimal_format_file((const char*)argv[1]);
		printf("%s", buff);
	} else 
	{
		printf("usage: %s <file_location>.\n", argv[0]);
		exit(1);
	}

	return 0;
}