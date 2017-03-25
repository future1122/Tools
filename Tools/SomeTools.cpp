#include "stdafx.h"
#include "SomeTools.h"
void SomeTools::InfixToPostfix()
{
	stack<char> s;
	s.push('#');
	char ch, y;
	while (cin >> ch, ch != '#') {
		if (isalpha(ch) || isdigit(ch)) cout << ch;
		else if (ch == ')') {
			for (y = s.top(), s.pop(); y != '('; y = s.top(), s.pop()) cout << y;
		}
		else if (ch == '(') {
			s.push(ch);
		}
		else {
			for (y = s.top(); property(ch) <= property(y); y = s.top()) {
				cout << y;
				s.pop();
			}
			s.push(ch);
		}
	}
	while (!s.empty()) {
		y = s.top();
		s.pop();
		if (y != '#') cout << y;
	}
	cout << endl;
}

int SomeTools::property(const char & c)
{
	
	if (c == '+' || c == '-')return 2;
	else if (c == '(') return 1;
	else if (c == '#') return 0;
	else return 3;
	
}
