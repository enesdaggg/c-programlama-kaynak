// 1.4 Eşitlik ve İlişkisel İşlemler

#include <stdio.h>

int main(void) {

	int x = 5, y = 3, z = 5, t = 3;

	if (x == z)
		printf("\n %d = %d 'tir.", x, z);

	if (x != y)
		printf("\n %d != %d 'tur.", x, y);

	if (x > y)
		printf("\n %d > %d 'tur.", x, y);

	if (x >= z)
		printf("\n %d >= %d 'tir.", x, z);

	if (y < x)
		printf("\n %d < %d 'tir.", y, x);

	if (y <= t)
		printf("\n %d <= %d 'tur.\n", y, t);

} // end main()
