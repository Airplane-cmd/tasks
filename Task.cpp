#include <iostream>
double doubler(double var)
{
	return 2 * var;
}
int main()
{
	double userNumber;
	std::cin >> userNumber;
	std::cout << doubler(userNumber);
}