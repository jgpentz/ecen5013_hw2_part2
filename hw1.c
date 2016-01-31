// hw1.c
//
// James Pentz
// ECEN 5013
// 1/30/2016

// includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hw1.h"

typedef enum {
	PASS,
	FAIL
} error_codes;

char reverse_string(char * str, int length){
    // declare variables
    int string_inc = 0;
    int string_length = length - 1;
    char * string_original;
    char * string_reversed;
    error_codes status;
    
    // validate input parameters
    if(length <= 0){
    	printf("Error");
		return status=FAIL;
	}
    else if(!str){
    	printf("Error");
		return status=FAIL;
	}

    // string reversal
    string_original = str;
    for(string_inc; string_inc < length; string_inc++){
		string_reversed[string_inc] = string_original[string_length];
		string_length--;
	}

    printf("%s\n",string_reversed);

    // check if string was reversed correctly
    if(string_inc < length)
		return status=FAIL;
    else if((string_inc - 1) == length)
		return status=PASS;
}
