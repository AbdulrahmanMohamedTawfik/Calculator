#pragma once
#include <iostream>
#include <stack>
using namespace std;
class Calc
{
//private:
//	static bool open_brace_error, close_brace_error;
//public:
//	bool static getopen_brace_error();
//	void static set_open_brace_error(bool val);
//	bool static get_close_brace_error();
//	void static set_close_brace_error(bool val);
public:
	double precedence(char op);
	double applyOp(double a, double b, int size_b, char op);
	double evaluate(string tokens);
};

