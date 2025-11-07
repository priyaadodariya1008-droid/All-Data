#include<iostream>
using namespace std;

class Time{
public:
    int h,m,s,total;

    void toSeconds() {
        cout<<"Enter hours: ";
        cin>>h;
        cout<<"Enter minutes: ";
        cin>>m;
        cout<<"Enter seconds: ";
        cin>>s;

        total=h*3600 + m*60 + s;
        cout<< "Total seconds = " << total << endl;
    }

    void toHMS() {
        cout<<"Enter total seconds: ";
        cin>>total;

        h = total / 3600;
        total = total % 3600;
        m = total / 60;
        s = total % 60;

        cout << "Hours: " << h << ", Minutes: " << m << ", Seconds: " << s << endl;
    }
};

int main() {
    Time t;
    int choice;

    cout<<"Choose option:\n";
    cout<<"1. Convert hour, minute, second to total seconds\n";
    cout<<"2. Convert total seconds to hour, minute, second\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    if (choice == 1)
        t.toSeconds();
    else if (choice == 2)
        t.toHMS();
    else
        cout<<"Invalid choice!"<< endl;

    return 0;
}
