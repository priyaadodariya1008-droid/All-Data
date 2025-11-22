#include <iostream>
using namespace std;

class LibraryItem {
private:
    string title;
    string author;
    string dueDate;

public:
    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getDueDate() { return dueDate; }

    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    void setDueDate(string d) { dueDate = d; }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
private:
    string isbn;

public:
    void setISBN(string i) {
        if(i.length() < 5)
            throw "Invalid ISBN!";
        isbn = i;
    }

    void checkOut() override {
        cout << "Book Checked Out Successfully.\n";
    }

    void returnItem() override {
        cout << "Book Returned Successfully.\n";
    }

    void displayDetails() override {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Due Date: " << getDueDate() << endl;
        cout << "ISBN: " << isbn << endl;
    }
};

class DVD : public LibraryItem {
private:
    int duration;

public:
    void setDuration(int d) {
        if(d <= 0)
            throw "Invalid DVD Duration!";
        duration = d;
    }

    void checkOut() override {
        cout << "DVD Checked Out Successfully.\n";
    }

    void returnItem() override {
        cout << "DVD Returned Successfully.\n";
    }

    void displayDetails() override {
        cout << "\n--- DVD Details ---\n";
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Due Date: " << getDueDate() << endl;
        cout << "Duration: " << duration << " mins" << endl;
    }
};

class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    void setIssue(int i) {
        if(i <= 0)
            throw "Invalid Issue Number!";
        issueNumber = i;
    }

    void checkOut() override {
        cout << "Magazine Checked Out Successfully.\n";
    }

    void returnItem() override {
        cout << "Magazine Returned Successfully.\n";
    }

    void displayDetails() override {
        cout << "\n--- Magazine Details ---\n";
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Due Date: " << getDueDate() << endl;
        cout << "Issue Number: " << issueNumber << endl;
    }
};

int main() {
    const int MAX = 10;
    LibraryItem* library[MAX];
    int count = 0;

    int choice;
    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add DVD\n";
        cout << "3. Add Magazine\n";
        cout << "4. Display All Items\n";
        cout << "5. Check Out Item\n";
        cout << "6. Return Item\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                Book* b = new Book();
                string t, a, d, isbn;

                cout << "Enter Title: ";
                cin >> t;
                cout << "Enter Author: ";
                cin >> a;
                cout << "Enter Due Date: ";
                cin >> d;
                cout << "Enter ISBN: ";
                cin >> isbn;

                b->setTitle(t);
                b->setAuthor(a);
                b->setDueDate(d);
                b->setISBN(isbn);

                library[count++] = b;
                cout << "Book Added.\n";
            }
            else if (choice == 2) {
                DVD* d1 = new DVD();
                string t, a, d;
                int dur;

                cout << "Enter Title: ";
                cin >> t;
                cout << "Enter Author: ";
                cin >> a;
                cout << "Enter Due Date: ";
                cin >> d;
                cout << "Enter Duration (min): ";
                cin >> dur;

                d1->setTitle(t);
                d1->setAuthor(a);
                d1->setDueDate(d);
                d1->setDuration(dur);

                library[count++] = d1;
                cout << "DVD Added.\n";
            }
            else if (choice == 3) {
                Magazine* m = new Magazine();
                string t, a, d;
                int issue;

                cout << "Enter Title: ";
                cin >> t;
                cout << "Enter Author: ";
                cin >> a;
                cout << "Enter Due Date: ";
                cin >> d;
                cout << "Enter Issue Number: ";
                cin >> issue;

                m->setTitle(t);
                m->setAuthor(a);
                m->setDueDate(d);
                m->setIssue(issue);

                library[count++] = m;
                cout << "Magazine Added.\n";
            }
            else if (choice == 4) {
                for (int i = 0; i < count; i++) {
                    library[i]->displayDetails();
                }
            }
            else if (choice == 5) {
                int id;
                cout << "Enter Item Number to Check Out (0 to " << count - 1 << "): ";
                cin >> id;
                library[id]->checkOut();
            }
            else if (choice == 6) {
                int id;
                cout << "Enter Item Number to Return (0 to " << count - 1 << "): ";
                cin >> id;
                library[id]->returnItem();
            }
        }
        catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }
        catch (...) {
            cout << "General Error Occurred.\n";
        }

    } while (choice != 7);

    for (int i = 0; i < count; i++) {
        delete library[i];
    }

    cout << "Exiting program...\n";
    return 0;
}