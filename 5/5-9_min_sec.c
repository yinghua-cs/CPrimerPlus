//  min_sec.c -- converts seconds to minutes and seconds
//  - Listing 5.9, Chapter 5, C Primer Plus, 6th. Page 159.
//
//  Created by Yinghua Han on 6/19/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# define SEC_PER_MIN 60		// seconds in a minutes

int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);		// read number of seconds
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;	// truncated number of minutes
		left = sec % SEC_PER_MIN;	// number of seconds left over
		printf("%d seconds is %d minutes, %d seconds. \n", sec,
			min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done\n");

	return 0;
	
}
