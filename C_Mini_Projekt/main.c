/*
 * main.c
 *
 *  Created on: Nov 28, 2016
 *      Author: MouaadGssair
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Prototypes.h"

#define MAX 7

int intArray[MAX] = {4,6,3,2,1,9,7};

int main(int argc, char **argv)
{

	printf("Input Array: ");
	   display();
	   printline(50);
	   quickSort(0,MAX-1);
	   printf("Output Array: ");
	   display();
	   printline(50);
}
