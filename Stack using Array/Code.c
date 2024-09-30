#include <stdio.h>
#include <stdlib.h>

#define STACK_CAPACITY 5

int myStack[STACK_CAPACITY];
int stackTop = -1;

void addElement(int num)
{
    if (stackTop == STACK_CAPACITY - 1)
    {
        printf("Error: Stack Overflow! Unable to add %d.\n", num);
    }
    else
    {
        myStack[++stackTop] = num;
        printf("Added %d to the stack.\n", num);
    }
}

int removeElement()
{
    if (stackTop == -1)
    {
        printf("Error: Stack Underflow! No elements to remove.\n");
        return -1;
    }
    else
    {
        return myStack[stackTop--];
    }
}

int checkTop()
{
    if (stackTop == -1)
    {
        printf("Stack is empty! No top element.\n");
        return -1;
    }
    else
    {
        return myStack[stackTop];
    }
}

void showStack()
{
    if (stackTop == -1)
    {
        printf("The stack is currently empty.\n");
    }
    else
    {
        printf("Current stack elements: ");
        for (int i = stackTop; i >= 0; i--)
        {
            printf("%d ", myStack[i]);
        }
        printf("\n");
    }
}

int main()
{
    addElement(5);
    addElement(15);
    addElement(25);
    showStack();

    printf("Removed: %d\n", removeElement());
    showStack();

    printf("Top element is: %d\n", checkTop());

    return 0;
}
