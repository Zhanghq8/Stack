//*****************************************************************************
//  This source file contains the Stack class test.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include <iostream>
#include "Stack.h"

int main()
{

	Stack_array newstack;
	newstack.Push(2);
	newstack.displaystack();
	newstack.Push(3);
	newstack.displaystack();
	newstack.Push(4);
	newstack.displaystack();
	newstack.Push(5);
	newstack.displaystack();
	newstack.Pop();
	newstack.displaystack();
	newstack.isEmpty();

	Stack_linkedlist anotherstack;
	anotherstack.Push(2);
	anotherstack.displaystack();
	anotherstack.Push(2);
	anotherstack.displaystack();
	anotherstack.Push(2);
	anotherstack.displaystack();
	int a = anotherstack.Top();
	std::cout << "The top of stack is: " << a << std::endl;
	anotherstack.Pop();
	anotherstack.displaystack();
	anotherstack.Pop();
	anotherstack.displaystack();
	bool b = anotherstack.isEmpty();
	std::cout << b << std::endl;
	anotherstack.Pop();
	anotherstack.displaystack();
	bool c = anotherstack.isEmpty();
	std::cout << c << std::endl;



}