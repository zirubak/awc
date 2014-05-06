/*
 * main.c
 *
 *  Created on: May 5, 2014
 *      Author: jh
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "awc.h"

int main(void){

	char *str;

	// initial memory allocation
	str = (char *)malloc(15);
	strcpy(str, "tutorialspoint");
	printf("String = %s, Address = %u\n", str, str);

	//reallocatinge memory
	str = (char *)realloc(str, 15);
	strcat(str, ".com");
	printf("String = %s, Address = %u\n", str, str);

	free(str);
	return 0;
}

