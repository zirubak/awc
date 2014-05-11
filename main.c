/*
 * main.c
 *
 *  Created on: May 5, 2014
 *      Author: jh
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "facttail.h"

int main(void){

	int rtn = 0;
	rtn = facttail(4,1);

	printf("tail recursion: 4! is %d", rtn);

	return 0;
}

