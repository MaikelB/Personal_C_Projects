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

	printf("Insert two numbers seperated by a comma \n");
	fflush(stdout);
	scanf("%d,%d",&xx,&yy);
	zz = xx+yy;
	printf("%d + %d = %d",xx,yy,zz);

	return 0;
}
