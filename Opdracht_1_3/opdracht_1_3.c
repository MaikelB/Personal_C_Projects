/*
 * opdracht_1_3.c
 *
 *  Created on: Apr 15, 2015
 *      Author: MaikelB
 */

/*
 * ##################################################################
 * #																#
 * #	Name		:	opdracht_1_1.c								#
 * #	Author		: 	Maikel Bolderdijk							#
 * #																#
 * #################################################################
 */

#include <stdio.h>

typedef int bool;
#define true 1
#define false 0;

bool printStar(int starCount) {
	int i;
	for(i = 0; i < starCount; i++) {
		printf("*");
	}

	printf("\n");
	fflush(stdout);

	return true;
}

int main(void) {
	int stars;
	printf("How much stars would you like to generate?\n");
	fflush(stdout);

	while(!scanf("%d",&stars)) {
		printf("Wrong input, try again\n");
		while(getchar() != '\n');
		fflush(stdout);
	}

	if(stars > 0 && stars < 81) {
		int ascending;
		for(ascending = 0; ascending <= stars; ascending++) {
			if(printStar(ascending) == true){}
		}

		int descending;
		for(descending = stars-1; descending > 0; descending--) {
			if(printStar(descending) == true) {}
		}
	} else {
		printf("Wrong input, value must be higher than 0 and lower than 81\nrestart the program");
	}

	return 0;
}
