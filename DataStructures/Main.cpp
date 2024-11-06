#include "Stack.h"
#include <iostream>
#include "Utils.h"
#include "Queue.h"
#define MAXSIZE  10
void stackCheck();
void utilsCheck();
int main()
{
    return 0;
}
void utilsCheck()
{
    int* num = reverse10();
    int i = 0;
    std::cout << "the array after reverse :" << std::endl;
    for (i = 0; i < MAXSIZE; i++)
    {
        std::cout << num[i] << ",";
    }
    delete[] num;
}
void stackCheck()
{
    Stack* stk = new Stack;
    List* newNode = nullptr;
    List* temp = nullptr;
    initStack(stk); //initiate stack of size 3
    push(stk, 1);
    push(stk, 4);
    push(stk, 9);


    std::cout << "Welcome to the first program in C++ !!!" << std::endl;
    newNode = *(stk->node);
    while (!isEmpty(stk))
    {
        std::cout << "Element was poped : " << pop(stk) << std::endl;
    }
    cleanStack(stk);
    delete(stk);
}

