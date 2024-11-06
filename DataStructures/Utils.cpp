#include "Utils.h"
#include "Stack.h"
#include <iostream>
#define MAXSIZE 10
/*
* this function recives array and the size of it and make reverse array for example 
* if the array ({1,2,3}) becaome ({3,2,1}) by help with the stack
*/
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
/*
* this function recives from user ten numbers and return array in reverse number by help
* with the function reverse
*/
int* reverse10()
{
	int* nums = new int[MAXSIZE];
	int i = 0;
	std::cout << "enter ten integer numbers : ";
	for (i = 0; i < MAXSIZE; i++)
	{
		std::cin >> nums[i];
	}
	reverse(nums, MAXSIZE);
	return nums;
}