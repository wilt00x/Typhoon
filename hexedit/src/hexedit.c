#ifndef HEXEDIT_C
#define HEXEDIT_C

#include "../include/hexedit.h"

char *save_hexadecimal_format_file(const char *file_location)
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