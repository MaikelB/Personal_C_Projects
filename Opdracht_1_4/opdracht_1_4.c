/*
 * opdracht_1_4.c
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

int main(void) {
	int n;
	char rightAlign[] = "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";

	printf("Insert a number between 0 and 100\n");
	fflush(stdout);

	while(!scanf("%d",&n)) {
		printf("Wrong input, try again\n");
		while(getchar() == '\n');
		fflush(stdout);
	}
	int i;
	for(i = 1; i <= 10; i++) {
		printf("%d * %d%-10s%d\n",n,i,rightAlign,n*i);
	}

	return 0;
}
