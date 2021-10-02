#include <stdio.h>
int main()
{
	unsigned int value, value2;

	printf("Enter hexadecimal value without \"0x\": ");
	scanf("%x", &value);
	printf("IN decimal: %d\n", value);
	printf("IN hexadecimal: %x\n", value >> 2);
	printf("Negative: %x\n", ~value);

	printf("Enter new hexadecimal value without \"0x\": ");
    scanf(" %x", &value2);
    printf("Bitewise or: %x", value | value2);
	return 0;
}
