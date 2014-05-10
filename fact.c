/*
 * fact.c
 *
 *  this is for basic recursion.
 *  page 29
 *
 *  Created on: May 10, 2014
 *      Author: jh
 */


#include "fact.h"

int fact(int n)
{
	// compute a factorial recursively

	if(n < 0){
		return 0;
	}else if(n == 0){
		return 1;
	}else if(n == 1){
		return 1;
	}else{
		return n * fact(n - 1);
	}
}
