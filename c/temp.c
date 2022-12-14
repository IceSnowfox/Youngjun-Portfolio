#include<stdio.h>

int main() {
	float f, c;
	printf("type in the room temperature in a Fahrenheit value: ");
	scanf("%f", &f);
	c = ((f - 32) * 5.0/9.0);
	printf("the room's temperature is %.1f\n", c);
	return 0;

}
