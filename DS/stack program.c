#include<stdio.h>
#include<stdlib.h>

struct arraystack{
    int top;
    int capacity;
    int *array;
};

struct arraystack* createstack(int cap)
{
    struct arraystack *stack;
    stack = malloc(sizeof(struct arraystack));
    stack->top = -1;
    stack->capacity = cap;
    stack->array = malloc(sizeof(int) * stack->capacity);
    return (stack);
}

int isfull(struct arraystack *stack)
{
    if(stack->top == stack->capacity-1)
        return (1);
    else
        return (0);
}

int isempty(struct arraystack *stack)
{
    if(stack->top == -1)
        return (1);
    else
        return(0);
}

void push(struct arraystack *stack, int item)
{
    if(! isfull(stack))
    {
        stack -> top++;
        stack -> array[stack -> top] = item;
    }
    else
        printf("stack is full");
}

int pop(struct arraystack *stack)
{
    int item;
    if(! isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return(item);
    }
    return(-1);
}


int main()
{
    int choice;
    int item;
    int full;
    struct arraystack *stack;
    stack = createstack(4);
    while(1)
    {
        printf("\npress:\n1. push\n2. pop\n3. exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("enter a number: ");
                scanf("%d", &item);
                push(stack, item);
                break;

            case 2:
                item=pop(stack);
                if(item==-1)
                    printf("stack is empty");
                else
                    printf("\n popped value is : %d", item);
                break;

            case 3:
                exit(0);
        }
    }
}

