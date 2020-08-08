// 1.5 Güvenli C Programlama

#include <stdio.h>

int main(void) {

	int x = 5;

	printf("%s", "Deneme1");	// {1} DOGRU - Deðiþken koymadan string(%s) karakterler için kullanýlabilir.
	printf("%s", "Deneme1\n");	// DOGRU - \n çalýþmaya engel deðildir.
	printf("%s", "Deneme2 %d", x);	// YANLIS - string(%s) varken deðiþken kullanýlmaz.

	puts("Deneme3");	// {2} DOGRU - puts içindeki yazýdan sonra 1 satýr atlar. Ama deðiþken kullanýlmaz.
	puts("Deneme4 %d", x); // YANLIS - puts içerisinde deðiþken kullanýlmaz.

} // end main()