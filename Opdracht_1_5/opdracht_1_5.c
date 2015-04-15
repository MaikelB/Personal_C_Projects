/*
 * opdracht_1_5.c
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
	int ch; //Char that is read
	unsigned long long container = 0; //Holds the value for output

	printf("Start with a '+' or '-' and add number behind it\n");
	fflush(stdout);

	while((ch = getchar()) != '\n') {
		if((ch > 47 && ch < 58) || ch == 43 || ch == 45) {
			if(ch == 43 || ch == 47) {
				putchar(ch);
				fflush(stdout);
			} else {
				container = container + (ch - 48); //Container - ascii number zero to get a whole number
				container = container * 10; //Multiply by 10 so another number can be added
			}
		} else {
			printf("Wrong input try again");
			fflush(stdout);
		}
	}

	container = container / 10; //Divide by 10 because we multiplied 1 too much
	printf("%llu",container);
	fflush(stdout);

	return 0;
}

