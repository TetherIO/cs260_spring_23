#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

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
        if (rear_ = nullptr){
            rear_ = newNode;
            front_ = newNode;
            return;
        }
        rear_->next = newNode;
        rear_ = newNode;
    }

};

int main() {
    Queue myQueue;

    cout << "myQueue.peek(): " << myQueue.peek() << endl;
    cout << "myQueue.pop(): " << myQueue.pop() << endl;

    myQueue.push(42)
}