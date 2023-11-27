#include <iostream>
#include <string>

int addition()
{
	long double x;
	long double y;

	std::cout << "Enter first number to the sum: ";
	std::cin >> x;
	

	std::cout << "Enter second number to the sum: ";
	std::cin >> y;
	
	long double result_a = (x + y);
	std::cout << "the sum of the two numbers is: \n" << result_a;
	return 0;
}
int subtraction()
{
	long double x2;
	long double y2;

	std::cout << "Enter first number to the subtraction sum ";
	std::cin >> x2;


	std::cout << "Enter second number to the subtraction sum: ";
	std::cin >> y2;

	long double result_s = (x2 - y2);
	std::cout << "the sum of the two numbers is: \n" << result_s;
	return 0;
}
int multiplication()
{
	long double x3;
	long double y3;

	std::cout << "Enter first number to the multiplication sum: ";
	std::cin >> x3;


	std::cout << "Enter second number to the multiplication sum: ";
	std::cin >> y3;

	long double result_m = (x3 * y3);
	std::cout << "the sum of the two numbers is: \n" << result_m;
	return 0;
}
int division()
{
	long double x4;
	long double y4;

	std::cout << "Enter first number to the division sum: ";
	std::cin >> x4;


	std::cout << "Enter second number to the division sum: ";
	std::cin >> y4;

	long double result_d = (x4/y4);
	std::cout << "the sum of the two numbers is: \n" << result_d;
	return 0;
}
int factoral()
{
	long double x5;
	long double factorial = 1.0;
	std::cout << "Enter first number to be factorialised: ";
	std::cin >> x5;

	for (int i = 1; i <= x5; i++) factorial *= i;
	std::cout << "Factorial of " << x5 << " = " << factorial;

	return 0;
}
int integral()
{
	long double upperbound;
	long double lowerbound;
	long double intervals;
	long double step;
	long double k;
	long double integration=0.0;
	std::cout << "Enter upper bound";
	std::cin >> upperbound;
	std::cout << "Enter lower bound";
	std::cin >> lowerbound;
	std::cout << "Enter num of sub intervals";
	std::cin >> intervals;

	step = (upperbound - lowerbound) / intervals;
	integration = lowerbound + upperbound;

	for (int i = 1; i <= intervals - 1; i++)
	{
		k = lowerbound + i * step;
		integration = integration + 2 * k;
	}

	integration = integration * step / 2;
	
	return 0;
}
int main()
{
	int input;
	std::cout << "User choose a number between 1 and 6.";
	std::cout << "[1] addition, [2] subtraction, [3] multiplication, [4] division, [5] factorals, [6] integrals";
	std::cin >> input;

	if (input > 6 || input < 1) {
		std::cout << "Choose a number between 1 and 6";
		std::cin >> input;
	}

	switch (input)
	{
	case 1:
		addition();
		break;
	case 2:
		subtraction();
		break;
	case 3:
		multiplication();
		break;
	case 4:
		division();
		break;
	case 5:
		factoral();
		break;
	case 6:
		integral();
		break;

	default:
		std::cout << "No Option was chosen";
	}
	return 0;
}
