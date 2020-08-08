// 1.2 İki Tam Sayıyı Toplama

#include <stdio.h>

int main(void) {

	int sayi1, sayi2, toplam;

	printf("Lutfen 1. sayiyi giriniz: ");
	scanf_s("%d", &sayi1);

	printf("Lutfen 2. sayiyi giriniz: ");
	scanf_s("%d", &sayi2);

	toplam = sayi1 + sayi2;

	printf("%d + %d = %d", sayi1, sayi2, toplam);

} // end main()