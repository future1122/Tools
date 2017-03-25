#pragma once
/*
工具类
*/
#include <stack>
#include <iostream>
using namespace std;
class SomeTools
{
public:
	static void InfixToPostfix();// 输入一个以# 结尾的中缀表达式，得到后缀表达式。
private:
	static int property(const char & c);
	
};

