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
	unsigned char ch = getchar();

	if(ch > 64 && ch < 91) {
		printf("HOOFDLETTER ASCII waarde van %c in hexadecimaal: %#02x\n\n",ch,ch);
	} else if(ch > 96 && ch < 123) {
		printf("KLEINE LETTER ASCII waarde van %c: %d\n",ch,ch);
	} else {
		printf("%c",ch);
	}
	fflush(stdout);
	return 0;
}
