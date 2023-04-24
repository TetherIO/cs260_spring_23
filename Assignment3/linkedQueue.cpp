#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    // constructor instead of default values
    Node(int data) : data(data), next(nullptr){}
};

class Queue {
private:
    Node* front_;
    Node* rear_;

public:
    Queue() : front_(nullptr), rear_(nullptr) {}

    void push(int newData) {
        Node *newNode = new Node(newData);
        if (rear_ == nullptr){
            rear_ = newNode;
            front_ = newNode;
            return;
        }
        rear_->next = newNode;
        rear_ = newNode;
    }

    int pop(){
        // check for empty list
        if (front_ == nullptr) {
            cout << "Nothing to dequeue, queue is empty." << endl;
            return -1;  // return error message and -1 to signal error
        }

        Node *holder = front_; // allows for deleting
        int data = front_->data;
        front_ = front_->next;

        if (front_ == nullptr){
            rear_ = nullptr;
        }

        delete holder;
        return data;

    }

    int peek() {
        if (front_ == nullptr) {
            cout << "Nothing to peek, queue is empty." << endl;
            return -1;
        }

        return front_->data;
    }
};

int main() {
    Queue myQueue;

    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;

    myQueue.push(42);
}