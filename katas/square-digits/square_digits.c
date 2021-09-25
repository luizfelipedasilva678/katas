#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count(int n) {
	int qtd = 1, aux = n;
	
	while(aux /= 10) {
		qtd++;
	}
	
	return qtd;
}

unsigned long long square_digits (unsigned n)
{
	int result = n, 
		qtd = count(n), 
		completeNum,
		i = qtd,
		len = qtd - 1,
		v[qtd];
		
	char *auxStr = (char *)malloc(sizeof(char));
	char str[1024];

		
	while(i >= 0) {
		i--;
		v[i] = result % 10;
		result = result / 10;
	}
	
	for(i = 0; i < qtd; i++) {
		v[i] = v[i] * v[i];
	}
	
	for(i = 0; i<qtd; i++) {
		itoa(v[i], auxStr, 10);
		strcat(str, auxStr);
	}
    
	return atoi(str);
} 

int main(void) {
	int digit = 945;
	
	printf("%d", square_digits(digit));
	
	return 0;
}
