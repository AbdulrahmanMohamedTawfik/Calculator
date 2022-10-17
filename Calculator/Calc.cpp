#include "Calc.h"
// CPP program to evaluate a given
// expression where tokens are
// separated by space.
#include <iostream>
#include <stack>
#include <math.h>
#include <string>
using namespace std;


// Function to find precedence of
// operators.
double Calc::precedence(char op) {
	if (op == '+' || op == '-' || op == '%')
		return 1;
	if (op == '*' || op == '/')
		return 2;
	if (op == '^' || op == '√')
		return 3;
	if (op == '.')
		return 4;
	return 0;
}

// Function to perform arithmetic operations.
double Calc::applyOp(double a, double b, int size_b, char op) {
	switch (op) {
	case '+': return a + b;
	case '-':
	{
		/*if (!isdigit(a))
		{
			a = 0;
		}*/
		return a - b;
	}
	case '%': return (int)a % (int)b;
	case '*': return a * b;
	case '/': return a / b;
	case '^': return pow(a, b);
	case '√': return sqrt(a);
	case '.':
	{
		int c = 1;
		/*cout << "decimal= " << a + b / pow(10, size_b) << endl;
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;*/

		for (int i = 0; i < size_b; i++)
		{
			c *= 10;
		}
		/*cout << "c= " << c << fixed << endl;
		cout << "a + (b / c)= " << a + (b / c);*/
		return a + (b / c);
	}
	}
}

// Function that returns value of
// expression after evaluation.
double Calc::evaluate(string tokens) {
	int i;
	bool negative = false;
	//bool negative1st = false;
	// stack to store integer values.
	stack <double> values;

	// stack to store operators.
	stack <char> ops;

	//remove +ve sign at the beginning
	if (tokens[0] == '+')
		tokens.replace(0, 1, "");

	//handle -ve sign at the beginning
	if (tokens[0] == '-')
	{
		if (tokens[1] == '-')
		{
			tokens.replace(0, 2, "");
		}
		else
			tokens.replace(0, 1, "(1-2)*");//(1-2)*5=-5
	}

	//begin to read the string (digit by digit)
	for (i = 0; i < tokens.length(); i++) {

		// Current token is a whitespace,
		// or +ve num with its sign
		// skip it.
		if (tokens[i] == ' ' || (tokens[i] == '+' && !isdigit(tokens[i - 1])))
			continue;

		//detect -ve numbers
		else if (tokens[i] == '-' && !isdigit(tokens[i - 1]))
		{
			negative = true;
			continue;
		}
		// Current token is an opening
		// brace, push it to 'ops'
		else if (tokens[i] == '(') {
			if (!ops.empty())
			{
				if (ops.top() == '(')
				{
					//cout << "open error\n";
					//open_brace_error = true;
					return 0;
				}
			}
			ops.push(tokens[i]);
		}

		// Current token is a number, push
		// it to stack for numbers.
		else if (isdigit(tokens[i])) {
			double val = 0;

			// There may be more than one
			// digits in number.
			while (i < tokens.length() && isdigit(tokens[i]))
			{
				val = (val * 10) + (tokens[i] - '0');
				i++;
			}
			if (negative)
			{
				values.push(-val);
				negative = false;
			}
			else
				values.push(val);

			// right now the i points to
			// the character next to the digit,
			// since the for loop also increases
			// the i, we would skip one
			// token position; we need to
			// decrease the value of i by 1 to
			// correct the offset.
			i--;
		}

		// Closing brace encountered, solve
		// entire brace.
		else if (tokens[i] == ')')
		{
			if (!ops.empty())
			{
				if (ops.top() == ')')
				{
					cout << "close error\n";
					//close_brace_error = true;
					return 0;
				}
			}
			while (!ops.empty() && ops.top() != '(')
			{
				double val2 = values.top();
				values.pop();

				double val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();

				values.push(applyOp(val1, val2, 0, op));
			}

			// pop opening brace.
			if (!ops.empty())
				ops.pop();
		}

		// Current token is an operator.
		else
		{
			// While top of 'ops' has same or greater
			// precedence to current token, which
			// is an operator. Apply operator on top
			// of 'ops' to top two elements in values stack.
			while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])) {
				double val2 = values.top();
				values.pop();

				double val1 = values.top();
				values.pop();

				char op = ops.top();
				ops.pop();
				string str_val2 = to_string((int)val2);
				int size_val2 = str_val2.length();

				values.push(applyOp(val1, val2, size_val2, op));
			}

			// Push current token to 'ops'.
			ops.push(tokens[i]);
		}
	}

	// Entire expression has been parsed at this
	// point, apply remaining ops to remaining
	// values.
	while (!ops.empty()) {
		double val2 = values.top();
		values.pop();

		double val1 = values.top();
		values.pop();

		char op = ops.top();
		ops.pop();

		string str_val2 = to_string((int)val2);
		int size_val2 = str_val2.length();
		values.push(applyOp(val1, val2, size_val2, op));
	}

	// Top of 'values' contains result, return it.
	return values.top();
}
