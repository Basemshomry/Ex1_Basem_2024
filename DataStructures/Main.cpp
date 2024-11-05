#include <iostream>
#include "Queue.h"

int main()
{

    Queue* stk = new Queue;
    initQueue(stk, 3); //initiate stack of size 3
    enqueue(stk, 1);
    enqueue(stk, 4);
    enqueue(stk, 9);


    std::cout << "Welcome to the first program in C++ !!!" << std::endl;

        while (!isEmpty(stk))
        {
            std::cout << "Element was poped : " << dequeue(stk) << std::endl;
        }

    cleanQueue(stk);
    delete(stk);

    return 0;
}
