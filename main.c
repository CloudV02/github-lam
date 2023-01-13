#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#define MAX_LEN 10
int main()
{
	FILE *ptr = fopen("floppy.img","r");
	uint8_t a[10];
	fgets(a,10,ptr);
	printf("%s",a);
	int x=0;
}
