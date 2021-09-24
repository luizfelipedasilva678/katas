#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * hello(const char *name) {
    if(strlen(name) == 0) {
    	return "Hello, World!";
	} else {
		char *newString = (char*) malloc(100);
		char *capitalizeName = (char*) malloc(100);
		unsigned int i;
		
		capitalizeName = strcpy(capitalizeName, name);
		
		for(i = 0; i < strlen(name); i++) {
			capitalizeName[i] = tolower((unsigned char) capitalizeName[i]);
			if(i == 0) capitalizeName[i] = toupper((unsigned char) capitalizeName[i]);
		}
		
		snprintf (newString, 100, "Hello, %s!", capitalizeName);
		
		free(capitalizeName);
		return newString;
	}
}

int main(void) {
	char *name = (char *)(malloc(sizeof(char)));
	name = "PDrsassdfASDFASDdasdPKo";
	
	char *result = hello(name);
	printf("%s", result);
		
	free(result);
	return 0;
}
