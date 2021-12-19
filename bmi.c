// Find your BMI (Body Mass Index).

#include <stdio.h>

int main(void)
{
	double weight;
	double height;
	double bmi;

	printf("Insert your weight in kilograms: \n");
	scanf("%lf", &weight);
	printf("Insert your height in meters: \n");
	scanf("%lf", &height);

	bmi = (weight) / (height * height);

	printf("\nYour BMI is: %lf\n\n", bmi);
	printf("BMI reference values from the Department of Health and Human Services/National Institutes of Health\n");
	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\tmore than 30\n");
}