//*****************************************************************************
//  This header file contains the Stack class declarations.
//  
//
//  Author: Hanqing Zhang, WPI, MA.
//  
//*****************************************************************************

#ifndef Stack_h
#define Stack_h

#include <iostream>
#include <string>

const int MAX_SIZE = 200;

struct Node
{
    int data;
    Node* link;
};

class Stack_array
{

private:
    int Stack[MAX_SIZE];
    int top;

public:
    Stack_array();
    bool Push(int data);
    bool Pop();
    int Top();
    bool isEmpty();
    bool displaystack();
    ~Stack_array();
};

//*******************//
class Stack_linkedlist
{

private:
    Node* Stacktop;

public:
    Stack_linkedlist();
    int countStack();
    bool Push(int data);
    bool Pop();
    int Top();
    bool isEmpty();
    bool displaystack();
    ~Stack_linkedlist();
};


#endif