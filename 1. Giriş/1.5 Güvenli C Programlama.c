// 1.5 G�venli C Programlama

#include <stdio.h>

int main(void) {

	int x = 5;

	printf("%s", "Deneme1");	// {1} DOGRU - De�i�ken koymadan string(%s) karakterler i�in kullan�labilir.
	printf("%s", "Deneme1\n");	// DOGRU - \n �al��maya engel de�ildir.
	printf("%s", "Deneme2 %d", x);	// YANLIS - string(%s) varken de�i�ken kullan�lmaz.

	puts("Deneme3");	// {2} DOGRU - puts i�indeki yaz�dan sonra 1 sat�r atlar. Ama de�i�ken kullan�lmaz.
	puts("Deneme4 %d", x); // YANLIS - puts i�erisinde de�i�ken kullan�lmaz.

} // end main()