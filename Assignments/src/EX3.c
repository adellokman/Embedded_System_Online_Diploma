/*
 ============================================================================
 Name        : Assignments.c
 Author      : Adel Lokman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	float num1, num2;
	printf("Enter Two numbers: ");
	fflush(stdout);
	scanf("%f %f", &num1, &num2);
	printf("Product: %f", num1*num2);
}
