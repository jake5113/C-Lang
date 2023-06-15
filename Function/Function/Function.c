#include <stdio.h>

int aaa(int n) {
	if (n <= 0) return;
	n--;
	printf("aaa\n");
	aaa(n+1);
}

void main() {
	aaa(5);
}

