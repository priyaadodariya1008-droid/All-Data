#include <iostream>
using namespace std;

class STACK
{
private:
    int *arr;
    int cpc;
    int top;
    int size;

public:
    STACK(int capacity)
    {
        this->cpc = capacity;
        arr = new int[capacity];
        this->top = -1;
        this->size = 0;
    }

    void push(int element)
    {
        if (this->size == this->cpc)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            this->top++;
            this->arr[top] = element;
            this->size++;
        }
    }

    void display()
    {
        cout << "--------------------------" << endl;
        for (int i = this->top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        cout << "--------------------------" << endl;
    }

    void pop()
    {
        if (this->size == 0 || this->top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            this->top--;
            this->size--;
        }
    }

    void thetop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << "Top Element is = " << this->arr[this->top] << endl;
        }
    }

    void isEmpty()
    {
        if (this->top == -1 || this->size == 0)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }

    void isFull()
    {
        if (this->size == this->cpc)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }
    }
};

int main()
{
    STACK stack(5);
    do
    {
        cout << "Press 1 for push operation" << endl;
        cout << "Press 2 for pop operation" << endl;
        cout << "Press 3 for top element" << endl;
        cout << "Press 4 for isEmpty operation" << endl;
        cout << "Press 5 for isFull operation" << endl;
        cout << "Press 6 for display stack" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter the value: ";
            cin >> element;
            stack.push(element);
            cout << "Element added successfully" << endl;
            break;

        case 2:
            stack.pop();
            cout << "Element removed successfully" << endl;
            break;

        case 3:
            stack.thetop();
            break;

        case 4:
            stack.isEmpty();
            break;

        case 5:
            stack.isFull();
            break;

        case 6:
            stack.display();
            break;

        default:
            cout << "Invalid Choice";
            break;
        }
    } while (true);
}