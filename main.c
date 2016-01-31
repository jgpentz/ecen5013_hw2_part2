// main.c
//
// James Pentz
// ECEN 5013
// 1/30/2016

// includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw1.h"

char string_cheese[] = "This is a string.";
char stringy_cheese[] = "some NUMmbers12345";
char stringiest_cheese[] = "Does it reverse \n\0\t correctly?";
int i;

int main(void){
	// first string
	printf("%s\n", string_cheese);
	reverse_string(&string_cheese[0], sizeof(string_cheese)-1);
	printf("%s\n", string_cheese);
	
	// second string
	printf("%s\n", stringy_cheese);
	reverse_string(stringy_cheese, sizeof(stringy_cheese)-1);
	printf("%s\n", stringy_cheese);

	// third string
	for(i = 0; i < sizeof(stringiest_cheese); i++)
		printf("%c", stringiest_cheese[i]);
	reverse_string(stringiest_cheese, sizeof(stringiest_cheese)-1);
	for(i = 0; i < sizeof(stringiest_cheese); i++)
		printf("%c", stringiest_cheese[i]);
	printf("\n");

	return 0;
}
