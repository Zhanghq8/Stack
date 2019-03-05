//*****************************************************************************
//  This source file contains the Stack class definitions.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#include "Stack.h"

// Arrat based stack
Stack_array::Stack_array()
{
	top = -1;
}

bool Stack_array::Push(int data)
{
	if (top == MAX_SIZE-1)
	{
		std::cout << "Error: Stack overflow!" << std::endl;
		return false;
	}
	else
	{
		Stack[++top] = data;
		return true;
	}
}

bool Stack_array::Pop()
{
	if (top == -1)
	{
		std::cout << "Error: The Stack is empty!" << std::endl;
		return false;
	}
	else
	{
		top--;
		return true;
	}
}

int Stack_array::Top()
{
	if (top == -1)
	{
		std::cout << "The Stack is empty!" << std::endl;
	}
	else
	{
		return Stack[top];
	}
}

bool Stack_array::isEmpty()
{
	if (top == -1)
	{
		std::cout << "The Stack is empty!" << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack_array::displaystack()
{
	int index;
	if (top == -1)
	{
		std::cout << "The Stack is empty!" << std::endl;
		return false;
	}
	else
	{
		for (index = 0; index <= top; index++)
		{
			std::cout << Stack[index] << " ";
		}
		std::cout << "" << std::endl;
		return true;
	}
}

Stack_array::~Stack_array()
{

}

// Linkedlist based stack

Stack_linkedlist::Stack_linkedlist()
{
	Stacktop = NULL;
}

int Stack_linkedlist::countStack()
{
	int count = 0;
	Node* temp = Stacktop;
	while (temp != NULL)
	{
		temp = temp->link;
		count++;
	}
	return count;
}


bool Stack_linkedlist::Push(int data)
{
	Node* temp = new Node();
	temp-> data = data;
	temp-> link = Stacktop;
	Stacktop = temp;
}

bool Stack_linkedlist::Pop()
{
	Node* temp;
	int count = countStack();
	if (count == 0)
	{
		std::cout << "The stack is empty." << std::endl;
		return false;
	}
	else
	{
		temp = Stacktop;
		Stacktop = Stacktop-> link;
		delete(temp);
		return true;
	}
	

}

int Stack_linkedlist::Top()
{
	int count = countStack();
	if (count == 0)
	{
		std::cout << "The stack is empty." << std::endl;
	}
	else
	{
		Node* temp = Stacktop;
		return temp->data;
	}
}

bool Stack_linkedlist::isEmpty()
{
	int count = countStack();
	if (count == 0)
	{
		std::cout << "The stack is empty." << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack_linkedlist::displaystack()
{
	int count = countStack();
	if (count == 0)
	{
		std::cout << "The stack is empty." << std::endl;
		return false;
	}
	else
	{
		Node* temp = Stacktop;
		while (temp != NULL)
		{
			std::cout << temp->data << " ";
			temp = temp->link;
		}
		std::cout << "" << std::endl;
		return true;
	}
}

Stack_linkedlist::~Stack_linkedlist()
{

}
