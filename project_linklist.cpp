#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;     

public:
    LinkedList() {
        head = NULL;
    }

    void append(int data) {
        Node* newNode = new Node();   
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data <<  endl ;
            temp = temp->next;
        }
        cout <<"------------"<<endl;
    }

    void insert_at_beginning(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Element " << key << " found in the list" << endl;
                cout<<endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Element " << key << " not found in the list" << endl;
    }

    void delete_node(int key) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted successfully" << endl;
            cout<<endl;
            return;
        }

        Node* current = head;
        while (current->next != NULL && current->next->data != key) {
            current = current->next;
        }

        if (current->next != NULL) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            cout << "Node deleted successfully" << endl;
        } else {
            cout << "Element not found" << endl;
        }
    }

    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* nextNode = NULL;

        while (current != NULL) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
    }
};

int main() {
    LinkedList list;
    Node *HEAD = NULL;


    list.append(10);
    list.append(20);
    list.append(30);
    list.display();

    list.insert_at_beginning(5);
    list.display();

    list.search(20);

    list.delete_node(20);
    list.display();

    list.reverse();
    list.display();

    return 0;
}
