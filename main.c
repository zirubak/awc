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

	int retval;
	int x = 10;
	int y = 10;

	int (*match)(void *key1, void *key2);

	int mach_int(void *a, void *b){
		if(*(int *)a == *(int *)b){
			return 1;
		}else{
			return 0;
		}
	}

	match = mach_int;

	retval = match(&x,&y);

	printf("the result is %d", retval);

}

