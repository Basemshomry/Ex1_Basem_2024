#include "Utils.h"
#include "Stack.h"
#include <iostream>
#define MAXSIZE 10
void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* stk = new Stack;
	initStack(stk);
	for (i = 0; i < size; i++)
	{
		push(stk,nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(stk);
	}
	cleanStack(stk);
	delete stk;
}
int* reverse10()
{
	int* nums = new int[MAXSIZE];
	Stack* stk = new Stack;
	int i = 0;
	initStack(stk);
	std::cout << "enter ten integer numbers : ";
	for (i = 0; i < MAXSIZE; i++)
	{
		std::cin >> nums[i];
	}
	for (i = 0; i < MAXSIZE; i++)
	{
		nums[i] = pop(stk);
	}
	return nums;
}