/*
 * main.c
 *
 *  Created on: May 5, 2014
 *      Author: jh
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fact.h"

int main(void){

	int rtn = 0;
	rtn = fact(4);

	printf("Basic recursion: 4! is %d", rtn);

	return 0;
}

