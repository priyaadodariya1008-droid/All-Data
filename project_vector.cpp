#include <iostream>
#include <vector>
using namespace std;

void addStudent(vector<int> &ids, vector<string> &names)
{
    int id;
    string name;

    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student Name: ";
    cin >> name;

    ids.push_back(id);
    names.push_back(name);

    cout << "Student Added\n";
}

void displayStudent(vector<int> ids, vector<string> names)
{
    if (ids.size() == 0)
    {
        cout << "No Students Available\n";
        return;
    }

    cout << "\nStudent List:\n";
    for (int i = 0; i < ids.size(); i++)
    {
        cout << "ID: " << ids[i]<<endl
             << "Name: " << names[i] << endl;
    }
}

int main()
{
    vector<int> ids;
    vector<string> names;
    int choice;

    do
    {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if (choice == 1)
            addStudent(ids, names);
        else if (choice == 2)
            displayStudent(ids, names);
        else if (choice == 3)
            cout << "Exit\n";
        else
            cout << "Invalid Choice\n";

    } while (choice != 3);

    return 0;
}