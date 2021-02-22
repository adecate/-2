#include <iostream>
#include <math.h>
using namespace std;

double f(double x);
bool isInArea(double x, double y);

void main()
{

	double x, y;
	int k;

	printf("Choose the task (1 or 2):\n");
	printf("1. task 1\n");
	printf("2. task 2\n");
	printf("=============\n");
	cin >> k;
	printf("\n");

	switch (k)
	{
	case 1:
	{
		printf("print x coordinate: ");
		cin >> x;
		printf("print y coordinate: ");
		cin >> y;
		printf("=============\n");
		printf("Result: %o\n\n", isInArea(x, y));

		break;
	}
	case 2:
	{
		printf("print x: ");
		cin >> x;
		printf("=============\n");
		printf("Result: %f\n\n", f(x));

		break;
	}
	}

	system("pause");

}

bool isInArea(double x, double y)
{
	if  ((x > 0 && y < 0) || (x > 1 && y > 1) || (x < -1 && y < -1))
		return false;
	else
		return true;
}

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}