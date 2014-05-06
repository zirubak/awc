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

	int a = 10;
	int b = 20;

	printf("a is %d. b is %d. \n", a, b);

	swap2(&a, &b, sizeof(int));

	printf("a is %d. b is %d. \n", a, b);
}

