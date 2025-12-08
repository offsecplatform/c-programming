// Area of a triangle , area = 1/2 * base * height
#include <stdio.h>

int main()
{
	float base, height, area;
	printf("Enter the base: ");
	scanf("%f", &base);
	printf("Enter height: ");
	scanf("%f", &height);
	area = 0.5 * base * height;
	printf("Calculated area: %f", area);
	printf("\n");
}
