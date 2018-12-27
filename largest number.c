#include <stdio.h> 
int main() 
{ 
	double number1, number2, number3;
	printf("Enter three numbers: "); 
	scanf("%lf %lf %lf", &number1, &number2, &number3); 
	if( number1>=number2 && number1>=number3 ) 
	printf("%.2f is the largest number.", number1); 
	if( number2>=number1 && number2>=number3 )
	printf("%.2f is the largest number.", number2); 
	if( number3>=number1 && number3>=number2 ) 
	printf("%.2f is the largest number.", number3); 
	return 0; 
	}