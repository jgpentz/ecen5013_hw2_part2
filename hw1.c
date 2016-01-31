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

static char m_swap(char *a, char *b);

typedef enum {
	PASS,
	FAIL
} error_codes;

char reverse_string(char * str, int length){
    // declare variables
    int string_inc = 0;
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
    for(string_inc; string_inc < length/2; string_inc++){
		m_swap(&str[0 + string_inc], &str[(length-1) - string_inc]);
	}

    // check if string was reversed correctly
    if(string_inc < length)
		return status=FAIL;
    else if((string_inc - 1) == length)
		return status=PASS;
}

static char m_swap(char *a, char *b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return PASS;
}
