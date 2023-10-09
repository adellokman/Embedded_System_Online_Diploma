/*
 ============================================================================
 Name        : Labs.c
 Author      : Adel Lokman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float degrees[10];

	for(int i = 0; i<10; i++)
	{
		printf("Enter student %d degree : ", i+1);
		fflush(stdout);
		scanf("%f", &degrees[i]);
	}

	for(int i = 0; i<10; i++)
	{
		printf("Student %d degree is %f\n", i+1 , degrees[i]);
	}
}
