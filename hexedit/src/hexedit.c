#ifndef HEXEDIT_C
#define HEXEDIT_C

#include "../include/hexedit.h"

char *save_hexadecimal_format_file(const char *file_location)
{
	int pos;
	FILE *fp;
	char *buffer;

	if((fp=fopen(file_location, "wb")) == NULL)
		printf("[-] An error was occured : '%s' does not exist or can not be opened.", file_location);

	fseek(fp, 0, SEEK_END);
	pos=ftell(fp);

	fseek(fp, 0, SEEK_SET);
	buffer=calloc(pos, sizeof(char));
	fread(buffer, sizeof(char), pos, fp);

	fclose(fp);
	
	return buffer;
}

#endif