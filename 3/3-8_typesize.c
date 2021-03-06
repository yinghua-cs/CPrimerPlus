//  typesize.c -- prints out type sizes
//  - Listing 3.8, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void)
{
	// c99 provides a %zd specifier for sizes

	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

	return 0;

}