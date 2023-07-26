#include<stdio.h> 	#include<stdlib.h>
	int main() {
	int i;
	for(i=1; i <= 3; i++) {
	printf((i&1) ? "odd\n" : "even\n");	}
	exit(EXIT_SUCCESS);	}