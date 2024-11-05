#include <iostream>
#include "Queue.h"

int main()
{

    Queue* elm = new Queue;
    int dequeuedElement = 0;
    initQueue(elm, 3); //initiate stack of size 3
    enqueue(elm, 1);
    enqueue(elm, 4);
    enqueue(elm, 9);


    std::cout << "Welcome to the first program in C++ !!!" << std::endl;
    while (!isEmpty(elm))
    {
        std::cout << "Element was poped : " << dequeue(elm) << std::endl;
    }
    cleanQueue(elm);
    delete(elm);

    return 0;
}
