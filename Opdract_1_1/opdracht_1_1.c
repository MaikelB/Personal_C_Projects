/*
 * opdracht_1_1.c
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
	int xx; //Inserted number 1
	int yy; //Inserted number 2
	int zz; //xx + yy

	printf("Insert a number \n");
	fflush(stdout);
	while(!scanf("%d",&xx)) {
		printf("Wrong input, try again\n");
		while(getchar() != '\n');
		fflush(stdout);
	}
	while(getchar() != '\n');

	printf("Insert a second number \n");
	fflush(stdout);

	while(!scanf("%d",&yy)) {
		printf("Wrong input, try again\n");
		while(getchar() != '\n') ;
		fflush(stdout);
	}

	zz = xx+yy;
	printf("%d + %d = %d",xx,yy,zz);

	return 0;
}
