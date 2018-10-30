/*
 ============================================================================
 Name        : LDD.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello szyjjmon!!"); /* prints !!!Hello World!!! */

	unsigned int * wsk_do_bufora;
	unsigned int liczba_elementow_bufora=6;

	wsk_do_bufora = malloc(liczba_elementow_bufora);


	for(int n=0;n<liczba_elementow_bufora;n++)
	{

		wsk_do_bufora[n]=100+n;
		printf("\n Element bufora = %d",wsk_do_bufora[n]);

	}

		printf("\nWyswietlam rozmiar wsk_do_bufora %d",sizeof(wsk_do_bufora));
		printf("\n Wyswietlam rozmiar liczby elementow bufora %d",sizeof(liczba_elementow_bufora));

		free(wsk_do_bufora);

		for(int n=0;n<liczba_elementow_bufora;n++)
			{


				printf("\n Element bufora = %d",wsk_do_bufora[n]);

			}


	return EXIT_SUCCESS;
}
