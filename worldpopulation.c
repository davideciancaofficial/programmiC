// Program to estimate the world population over the next 100 years.

#include <stdio.h>

int main(void)
{
	double currentPopulation;
	double growthRate;
	double population;
	int counter;	

	currentPopulation = 7914450000;
	growthRate = 0.01;
	population = currentPopulation;

	for (counter = 1; counter <= 100; counter++)
	{	
		population = population + (population * growthRate);
		printf("Year: %d\tPopulation: %lf\n", (counter+2021), population);
	}
}