#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

typedef node Node;
typedef node *Link;

Link front = NULL;
Link rear = NULL;

Link createNode(int x) {
    Link curr = new Node;
    curr->data = x;
    curr->next = NULL;
    return curr;
}

int getFront() {
    if(front != NULL) {
        return front -> data;
    }
    return -1;
}

void enQueue(int x) {
    Link tmp = createNode(x);
    if(front == NULL) {
        tmp -> next = rear;
        front = tmp;
        rear = tmp;
    } else {
        rear -> next = tmp;
        rear = tmp;
    }
}

bool isEmpty()
{
    return front == NULL;
}

void show() {
    Link curr = front;
    while(curr) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

int main() {
    enQueue(1);
    enQueue(2);
    enQueue(3);
    cout << front -> data << "\n";
    cout << front -> next -> data << "\n";
    cout << front -> next -> next -> data << "\n";
    cout << getFront() << "\n";
    show();
    cout << "\n";
    return 0;
}