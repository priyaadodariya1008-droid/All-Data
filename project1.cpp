#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sorting(int arr[], int size)
{
    int choice;
    cout << "Enter 1 for Bubble Sorting"<<endl;
    cout << "Enter 2 for Insertion Sorting"<<endl;
    cout << "Enter 3 for Selection Sorting"<<endl;
    cout << "Enter your choice : ";
    cin >> choice;

    int pass = 1;
    switch (choice)
    {
    case 1:
        while (pass < size)
        {
            for (int i = 0; i < size-1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            pass++;
        }
        break;

    case 2:
        for (int i = 1; i < size; i++)
        {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && key < arr[j])
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        break;

    case 3:
        for (int i = 0; i < size - 1; i++)
        {
            int minIndex = i;
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }

            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
        break;

    default:
        break;
    }
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "enter value at index " << i << ": ";
        cin >> arr[i];
    }

    cout << endl;
    
    cout << "Original Array" << endl;
    printArray(arr, size);
    cout << endl << endl;

    sorting(arr, size);

    cout << endl;

    cout << "Sorted Array" << endl;
    printArray(arr, size);

    return 0;
}