#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    // constructor instead of default values
    explicit Node(int data) : data(data), next(nullptr){}
};

class Queue {
private:
    Node* front_;
    Node* rear_;

public:
    Queue() : front_(nullptr), rear_(nullptr) {}

    // aka enqueue from assignment instructions, similar to stack operation but modified for FIFO structure
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

    // aka dequeue from assignment instructions, similar to stack operation but modified for FIFO structure
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
    myQueue.push(11);
    myQueue.push(38);

    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;

    myQueue.push(55);
    myQueue.push(55);

    cout << "myQueue.pop(): " << myQueue.pop() << endl;
    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;
    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;
    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;
    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;

}
