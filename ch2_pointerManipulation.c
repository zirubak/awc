/*
 * ch2_pointerManipulation.c
 *
 *  Created on: Apr 27, 2014
 *      Author: jh
 */


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "awc.h"

int swap2(void *x, void *y, int size){
	void *tmp;

	if((tmp = malloc(size)) == NULL)
		return -1;

	memcpy(tmp, x, size); memcpy(x, y, size); memcpy(y, tmp, size);
	free(tmp);

	return 0;
}




