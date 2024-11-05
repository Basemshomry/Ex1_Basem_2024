#include <iostream>
#include "Stack.h"

int main()
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
    return 0;
}

