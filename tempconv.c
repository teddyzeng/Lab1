#include <stdio.h>

int main()
{
	printf("Fahrenheit \t Celsius");
	printf("\n========== \t ======= \n");

	int f,c;
	for (f=0; f <= 300; f=f+10)
	{
		c= 5.0 / 9.0 * (f-32);
		printf("%10d \t %7d \n", f, c);
	}
	return 0;
}
