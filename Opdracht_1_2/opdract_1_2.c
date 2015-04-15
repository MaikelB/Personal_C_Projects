/*
 * opdract_1_2.c
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
#include <string.h>

int main(void) {
	char ch[] = "Maikel";

	printf("ASCII waardes van: %s\n",ch);
	fflush(stdout);

	int i;
	for(i = 0; i < strlen(ch); i++) {
		printf("%d = %c\n",ch[i], ch[i]);
	}

	return 0;
}
