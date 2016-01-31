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

char reverse_string(char * str, int length);
char string_cheese[] = "This is a string.";
char stringy_cheese[] = "some NUMmbers12345";
char stringiest_cheese[] = "Does it reverse \n\0\t correctly?";

int main(void){
	// first string
	printf("%s\n", string_cheese);
	reverse_string(string_cheese, strlen(string_cheese));
	
	// second string
	printf("%s\n", stringy_cheese);
	reverse_string(stringy_cheese, strlen(stringy_cheese));
	
	// third string
	printf("%s\n", stringiest_cheese);
	reverse_string(stringiest_cheese, strlen(stringiest_cheese));

	return 0;
}
