#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * hello(const char *name) {
    if(strlen(name) == 0) {
    	return "Hello, World!";
	} else {
		char aux[strlen(name) + 1];
		char *res = (char *) malloc(100);
		unsigned int i;
		
		strcpy(res, "Hello, ");		
		strcpy(aux, name);
		
		for(i = 0; i < strlen(aux); i++) {
			aux[i] = tolower((unsigned char) aux[i]);
			if(i == 0) aux[i] = toupper((unsigned char) aux[i]);
		}
		
		strcat(res, aux);
		strcat(res, "!");	
				
		return res;
	}
}

int main(void) {
	char name[100] = "aLIce";
	
	char *result = hello(name);
	printf("%s", result);
		
	free(result);
	return 0;
}
