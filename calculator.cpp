#include "calculator.h"

//function that add doubles
int Calculator::Add (double a, double b)
{
	//function that  return adding doubles

	return a + b + 0.5;
}

//function that substracts doubles

int Calculator::Sub (double a, double b)
{
	//function that subsrtacts doubles

    return Add (a, -b);
}

//function that multimply doubles

int Calculator::Mul (double a, double b)
{
	//function that multyplying doubles

    return a * b + 0.5;
}
//=)
