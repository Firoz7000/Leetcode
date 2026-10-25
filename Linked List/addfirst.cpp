#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;

    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = nullptr;
    }


    void addFirst(int value){
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }
    void display(){
        Node* current = head;

        while(current != nullptr){
            cout << current->data << "->";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};
int main(){
    LinkedList list;
    list.addFirst(30);
    list.addFirst(20);
    list.addFirst(10);
    list.addFirst(5);

    list.display();
}