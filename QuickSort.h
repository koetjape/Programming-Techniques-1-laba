#ifndef QuickSort
#define QuickSort

#include "Header.h"

void quicksort(N::our_class* mas, int first, int last) {
	N::our_class mid, count;
	int f = first;
	int l = last;
	mid = mas[(f + l) / 2];
	do {
		while (mas[f] < mid) {
			f++;
		}
		while (mas[l] > mid) {
			l--;
		}
		if (f <= l) {
			count = mas[f];
			mas[f] = mas[l];
			mas[l] = count;
			f++;
			l--;
		}
	} while (f < l);
	if (first < l) {
		quicksort(mas, first, l);
	}
	if (f < last) {
		quicksort(mas, f, last);
	}
}


#endif
