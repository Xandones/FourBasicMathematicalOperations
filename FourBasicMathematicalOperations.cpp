#include <iostream>

float Sum(float num1, float num2);
float Subtraction(float num1, float num2);
float Multiplication(float num1, float num2);
float Division(float num1, float num2);

int main()
{
	float num1, num2;

	std::cout << "Type the first number: ";
	std::cin >> num1;
	std::cout << "Type the second number: ";
	std::cin >> num2;
	std::cout << "******* Results of the four basic mathematical operations *******\n";
	std::cout << num1 << " + " << num2 << " = " << Sum(num1, num2) << "\n";
	std::cout << num1 << " - " << num2 << " = " << Subtraction(num1, num2) << "\n";
	std::cout << num1 << " X " << num2 << " = " << Multiplication(num1, num2) << "\n";
	std::cout << num1 << " / " << num2 << " = " << Division(num1, num2) << "\n";
}

float Sum(float num1, float num2)
{
	return num1 + num2;
}

float Subtraction(float num1, float num2)
{
	return num1 - num2;
}

float Multiplication(float num1, float num2)
{
	return num1 * num2;
}

float Division(float num1, float num2)
{
	return num1 / num2;
}