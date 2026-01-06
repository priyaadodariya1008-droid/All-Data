#include<iostream>
using namespace std;

class Queue
{
    private:
        int *arr;
        int front;
        int rear;
        int size;
        int capacity;

    public:
        Queue(int capacity)
        {
            this->capacity=capacity;
            this->arr = new int[this->capacity];
            this->front = -1;
            this->rear= -1;
            this->size = 0;
        }

        bool enqueue(int value)
        {
            if (this->rear == this->capacity - 1)
            {
                cout << "Queue is Full" << endl;
                return false;
            }

            if (this->front == -1 && this->rear == -1)
            {
                this->front = 0;
                this->rear = 0;
            }
            else
            {
                this->rear++;
            }

            this->arr[this->rear] = value;
            this->size++;
            return true;
        }

        void dequeue()
        {
            if(this->front == -1 && this->rear == -1)
            {
                cout<<"Queue is Empty"<<endl;
            }
            else if(this->front == this->rear)
            {
                this->front = -1;
                this->rear = -1;
                this->size--;
            }
            else
            {
                this->front++;
                this->size--;
            }
        }

        void update(int oldValue, int newValue)
        {
            if (size == 0)
            {
                cout << "Queue is Empty" << endl;
                return;
            }

            bool found = false;
            for (int i = front; i <= rear; i++)
            {
                if (arr[i] == oldValue)
                {
                    arr[i] = newValue;
                    found = true;
                    break;
                }
            }

            if (found)
                cout << "Element updated successfully" << endl;
            else
                cout << "Element not found" << endl;
        }

        void display()
        {
             if(this->front == -1 && this->rear == -1)
             {
                cout<<"Queue is Empty"<<endl;
             }
             else
             {
                 cout<<"_____________________"<<endl;
                 for(int i = this->front; i<=this->rear; i++)
                 {
                    cout<<this->arr[i]<<" "<<endl;
                 }
                cout<<"_____________________"<<endl;
             }
        }

        void printArray(int arr[], int size)
        {
            for(int i=0; i<size; i++)
            {
                cout << arr[i] << " ";
            }
        }

        void BubbleSort(int arr[], int size)
        {
            for(int pass = 1; pass < size; pass++)
            {
                for(int i = 0; i < size - pass; i++)
                {
                    if(arr[i] > arr[i+1])
                    {
                        int temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                    }
                }
            }
        }
};

int main()
{

    int capacity;
    cout<<"Enter the capacity of queue: ";
    cin>>capacity;

    Queue queue(capacity);

    do
    {
        cout<<"Press 1 for enqueue operation: "<<endl;
        cout<<"Press 2 for dequeue operation: "<<endl;
        cout<<"Press 3 for display queue: "<<endl;
        cout<<"Press 4 for update queue: "<<endl;
        cout<<"Press 5 for Bubble Sort: "<<endl;

        int choice;
        cout<<"Enter the choice: ";
        cin>>choice;

        switch(choice)
            {

                case 1:
                    int value;
                    cout<<"Enter the value: ";
                    cin>>value;

                    if (queue.enqueue(value))
                    {
                        cout << "Element added successfully" << endl;
                    }
                    break;

                case 2:
                    queue.dequeue();
                    cout<<"Element removed successfully" << endl;
                    break;

                case 3:
                    queue.display();
                    break;

                case 4:
                {
                    int oldVal, newVal;
                    cout << "Enter old value: ";
                    cin >> oldVal;
                    cout << "Enter new value: ";
                    cin >> newVal;
                    queue.update(oldVal, newVal);
                    break;
                }

                case 5:
                {
                    int size;
                    cout << "Enter the size of array: ";
                    cin >> size;

                    int* arr = new int[size];

                    for(int i=0; i<size; i++)
                    {
                        cout << "Enter value at index " << i << ": ";
                        cin >> arr[i];
                    }

                    cout << "Original Array\n";
                    queue.printArray(arr, size);

                    queue.BubbleSort(arr, size);

                    cout << "\nSorted Array\n";
                    queue.printArray(arr, size);
                    cout<<endl;
                    break;
                }
                
                default:
                    cout<<"Wrong Choice"<<endl;
                    break;
            }
    } while (true);
}