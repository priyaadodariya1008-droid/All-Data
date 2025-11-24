// 1

#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int publishedYear;

public:
    void setData(string t, string a, int y) {
        title = t;
        author = a;
        publishedYear = y;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Published Year: " << publishedYear << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book arr[n];

    for(int i = 0; i < n; i++) {
        string t, a;
        int y;
        cout << "\nEnter Title: ";
        cin >> t;
        cout << "Enter Author: ";
        cin >> a;
        cout << "Enter Year: ";
        cin >> y;

        arr[i].setData(t, a, y);
    }

    cout << "\n--- Book Details ---\n";
    for(int i = 0; i < n; i++) {
        arr[i].display();
    }
}


// 2

// #include <iostream>
// using namespace std;

// class Person {
// private:
//     string name;
//     int age;
//     string address;

// public:
//     void setName(string n) { 
//         name = n; 
//     }
//     void setAge(int a) { 
//         age = a; 
//     }
//     void setAddress(string ad) { 
//         address = ad; 
//     }

//     string getName() { 
//         return name; 
//     }
//     int getAge() { 
//         return age; 
//     }
//     string getAddress() { 
//         return address; 
//     }

//     Person(string n = "", int a = 0, string ad = "") {
//         name = n;
//         age = a;
//         address = ad;
//     }

//     void display() {
//         cout << "Name: " << getName() << endl;
//         cout << "Age: " << getAge() << endl;
//         cout << "Address: " << getAddress() << endl;
//         cout << "------------------------" << endl;
//     }
// };

// int main() {
//     int n;
//     cout << "Enter number of persons: ";
//     cin >> n;

//     Person p[n];  

//     for (int i = 0; i < n; i++) {
//         string name, addr;
//         int age;

//         cout << "\nEnter Name: ";
//         cin >> name;
//         cout << "Enter Age: ";
//         cin >> age;
//         cout << "Enter Address: ";
//         cin >> addr;

//         p[i].setName(name);
//         p[i].setAge(age);
//         p[i].setAddress(addr);
//     }

//     cout << "\n--- Person Details ---\n";
//     for (int i = 0; i < n; i++) {
//         p[i].display();
//     }
// }


// 3

// #include <iostream>
// using namespace std;

// class Animal {
// private:
//     string name;
//     string sound;

// public:
//     void setData(string n, string s) {
//         name = n;
//         sound = s;
//     }

//     string getSound() {
//         return sound;
//     }

//     string getName() {
//         return name;
//     }
// };

// class Dog : public Animal {
// public:
//     void makeSound() {
//         cout << getName() << " says: " << getSound() << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void makeSound() {
//         cout << getName() << " says: " << getSound() << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.setData("Dog", "Bark");

//     Cat c;
//     c.setData("Cat", "Meow");

//     d.makeSound();
//     c.makeSound();
// }


// 4

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     virtual void displayDetails() {
//         cout << "Generic Animal" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void displayDetails() {  
//         cout << "This is a Dog" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void displayDetails() {  
//         cout << "This is a Cat" << endl;
//     }
// };

// int main() {

//     Dog d1;
//     Cat c1;
//     Dog d2;

//     Animal* arr[3] = { &d1, &c1, &d2 };

//     cout << "--- Animal Details ---" << endl;
//     for (int i = 0; i < 3; i++) {
//         arr[i]->displayDetails();   
//     }
// }


// 5

// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     virtual void area() = 0;
//     virtual void draw() = 0;
// };

// class Circle : public Shape {
// private:
//     int r;
// public:
//     Circle(int radius) {
//         r = radius;
//     }

//     void area() {
//         cout << "Circle Area: " << 3.14 * r * r << endl;
//     }

//     void draw() {
//         cout << "Drawing Circle" << endl;
//     }
// };

// class Rectangle : public Shape {
// private:
//     int w, h;
// public:
//     Rectangle(int width, int height) {
//         w = width;
//         h = height;
//     }

//     void area() {
//         cout << "Rectangle Area: " << w * h << endl;
//     }

//     void draw() {
//         cout << "Drawing Rectangle" << endl;
//     }
// };

// int main() {
//     Shape* arr[2];

//     arr[0] = new Circle(5);
//     arr[1] = new Rectangle(4, 7);

//     for(int i = 0; i < 2; i++) {
//         arr[i]->area();
//         arr[i]->draw();
//         cout << "----------------------" << endl;
//     }
// }