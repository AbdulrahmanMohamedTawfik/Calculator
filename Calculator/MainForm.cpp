#include "MainForm.h"
#include "Calc.h"
#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;
[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
	//auto arr = gcnew cli::array<String^>(42);
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Calculator::MainForm frm;
	Application::Run(% frm);
	return 0;
}

//round number to two digits after dicimal point.
float round_two_digits(double var)
{
	// 37.66666 * 100 =3766.66
	// 3766.66 + .5 =3767.16    for rounding off value
	// then type cast to int so value is 3767
	// then divided by 100 so the value converted into 37.67
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}

//check if there is two symbols in sequence like "56/*47".
bool check_duble_op(string str)
{
	// Calculating the length of string
	int l = str.length();
	for (int i = 0; i < l - 1; i++) {
		if (str.at(i) != '(' && str.at(i) != ')' && str.at(i) != '-' && str.at(i) != '+' && str.at(i) != '^')
		{
			if (str.at(i + 1) != '(' && str.at(i + 1) != ')' && str.at(i + 1) != '-' && str.at(i + 1) != '+')
			{
				if (!isdigit(str.at(i)) && !isalpha(str.at(i)) && !isdigit(str.at(i + 1)) && !isalpha(str.at(i + 1)))
				{
					return true;
				}
			}
		}
	}
	return false;
}

System::Void Calculator::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Calculator::MainForm::num0_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "0");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num1_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "1");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num2_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "2");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num3_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "3");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num4_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "4");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num5_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "5");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num6_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "6");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num7_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "7");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num8_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "8");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::num9_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "9");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::DEL_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ str_sys;//system string to read from text box
	string s;
	str_sys = operationscreen->Text;
	operationscreen->Text = str_sys->Substring(0, str_sys->Length - 1);

	return System::Void();
}

System::Void Calculator::MainForm::AC_Click(System::Object^ sender, System::EventArgs^ e)
{
	Calculator::MainForm::operationscreen->Text = "";
	Answer->Text = "";
	if (Answer->BackColor == System::Drawing::Color::LightCoral)
	{
		operationscreen->BackColor = System::Drawing::Color::Silver;
		panel1->BackColor = System::Drawing::Color::Silver;
		Answer->BackColor = System::Drawing::Color::Silver;
		Answer->ForeColor = System::Drawing::Color::Black;
	}
	operationscreen->Focus();
	return System::Void();
}

System::Void Calculator::MainForm::multiply_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "*");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "+");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::divide_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "/");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "-");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::modulus_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "%");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::power_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "^");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::decimalpoint_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, ".");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::left_brace_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "(");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::right_brace_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, ")");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::squareroot_Click(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, "√");
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::operationscreen_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Enter)
	{
		equal->PerformClick();
	}
	return System::Void();
}

System::Void Calculator::MainForm::MainForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	operationscreen->Focus();
	return System::Void();
}

System::Void Calculator::MainForm::LastAns_Click(System::Object^ sender, System::EventArgs^ e)
{
	int pos = 0, len = 0;;
	string ans = to_string(Ans);
	for (pos = ans.length(); pos > 0; pos--)
	{
		if (ans[pos] == '0')
		{
			if (ans[pos - 1] != 0 && isdigit(ans[pos - 1]))
			{
				break;
			}
			len++;
			//ans = to_string((int)Ans);
		}
	}
	cout << "pos= " << pos << "  ,len= " << len << endl;
	ans = ans.erase(pos, len);
	String^ syscontents = gcnew String(ans.c_str());//convert from std string to sys string
	operationscreen->Text = operationscreen->Text->Insert(operationscreen->SelectionStart, syscontents);
	operationscreen->SelectionStart = operationscreen->Text->Length;
	operationscreen->SelectionLength = 0;
	return System::Void();
}

System::Void Calculator::MainForm::equal_Click(System::Object^ sender, System::EventArgs^ e)
{
	Calc c;
	string str;
	String^ str_sys;//system string to read from text box
	str_sys = operationscreen->Text;
	str = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string

	//Handle some errors
	if (str == "" || str == " ")//empty
	{
		operationscreen->BackColor = System::Drawing::Color::LightCoral;
		panel1->BackColor = System::Drawing::Color::LightCoral;
		Answer->BackColor = System::Drawing::Color::LightCoral;
		Answer->ForeColor = System::Drawing::Color::DarkRed;
		Answer->Text = "Expression is Empty";
	}
	else if (str.length() == 1 && (isalpha(str[0]) || !isalnum(str[0])))//example)*
	{
		operationscreen->BackColor = System::Drawing::Color::LightCoral;
		panel1->BackColor = System::Drawing::Color::LightCoral;
		Answer->BackColor = System::Drawing::Color::LightCoral;
		Answer->ForeColor = System::Drawing::Color::DarkRed;
		Answer->Text = "syntax error";//Not valid expression1
	}
	else if (str.length() > 1 && (isalpha(str[0]) || !isalnum(str[0])))//example)*2
	{
		if (str[0] != '+' && str[0] != '-' && str[0] != '(')
		{
			operationscreen->BackColor = System::Drawing::Color::LightCoral;
			panel1->BackColor = System::Drawing::Color::LightCoral;
			Answer->BackColor = System::Drawing::Color::LightCoral;
			Answer->ForeColor = System::Drawing::Color::DarkRed;
			Answer->Text = "syntax error";//Not valid expression2
		}
		else
		{
			if (Answer->BackColor == System::Drawing::Color::LightCoral)
			{
				operationscreen->BackColor = System::Drawing::Color::Silver;
				panel1->BackColor = System::Drawing::Color::Silver;
				Answer->BackColor = System::Drawing::Color::Silver;
				Answer->ForeColor = System::Drawing::Color::Black;
			}
			Ans = c.evaluate(str);
			str_sys = Ans.ToString();
			Answer->Text = str_sys;
		}
	}
	else if (str.length() > 1 && !isdigit(str.back()))//example)5*
	{
		operationscreen->BackColor = System::Drawing::Color::LightCoral;
		panel1->BackColor = System::Drawing::Color::LightCoral;
		Answer->BackColor = System::Drawing::Color::LightCoral;
		Answer->ForeColor = System::Drawing::Color::DarkRed;
		Answer->Text = "syntax error";//Not valid expression3
	}
	else if (str.length() > 1 && check_duble_op(str))//example)*/
	{
		operationscreen->BackColor = System::Drawing::Color::LightCoral;
		panel1->BackColor = System::Drawing::Color::LightCoral;
		Answer->BackColor = System::Drawing::Color::LightCoral;
		Answer->ForeColor = System::Drawing::Color::DarkRed;
		Answer->Text = "syntax error";//Not valid expression4
	}
	else
	{
		if (Answer->BackColor == System::Drawing::Color::LightCoral)
		{
			operationscreen->BackColor = System::Drawing::Color::Silver;
			panel1->BackColor = System::Drawing::Color::Silver;
			Answer->BackColor = System::Drawing::Color::Silver;
			Answer->ForeColor = System::Drawing::Color::Black;
		}
		Ans = c.evaluate(str);
		str_sys = Ans.ToString();
		Answer->Text = str_sys;

	}
	return System::Void();
}


