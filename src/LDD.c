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

	/*unsigned int * wsk_do_bufora;
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
	 */

	struct s {
		unsigned char* zmienna1;
		int zmienna2;

	} ;

	struct s zmienna_strukt;
	struct s* wsk_strukt=&zmienna_strukt;


	zmienna_strukt.zmienna2 = 4;
	printf("\n Wartosc zmienna2 = %d", zmienna_strukt.zmienna2);
	zmienna_strukt.zmienna1 = NULL;
	printf("\n Wartosc zmienna1 = %c", zmienna_strukt.zmienna1);
	 unsigned char xyz='x';
	 wsk_strukt->zmienna1=&xyz;
	 wsk_strukt->zmienna2=6;



	printf("\n Wartosc zmienna2 = %d", zmienna_strukt.zmienna2); //int
	printf("\n Wartosc zmienna1 = %c", *zmienna_strukt.zmienna1);	//char

	return EXIT_SUCCESS;
}
