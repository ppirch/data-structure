#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

typedef node Node;
typedef node *Link;

Link head = NULL;

Link createNode(int x)
{
    Link curr = new Node;
    curr->data = x;
    curr->next = NULL;
    return curr;
}

void insertHead(int x)
{
    Link newHead = createNode(x);
    if (head == NULL)
    {
        head = newHead;
    }
    else
    {
        newHead->next = head;
        head = newHead;
    }
}

bool isEmpty()
{
    return head == NULL;
}

int retrieve_index(int idx) {
    Link curr = head;
    int p = 0;
    while(curr) {
        if(p == idx) {
            return curr->data;
        }   
    curr = curr -> next;
    p+=1;
    }
    return -1;
}

int find(int x) {
    Link curr = head;
    int p = 0;
    while(curr) {
        if(p == x) {
            return curr->data;
        }   
    curr = curr -> next;
    p+=1;
    }
    return -1;
}

void show() {
    Link curr = head;
    while(curr) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

int main() {
    head = createNode(1);
    insertHead(2);
    insertHead(3);
    insertHead(4);
    insertHead(5);
    // 5 -> 4 -> 3 -> 2 -> 1
    // 0    1    2    3    4 
    cout << retrieve_index(2) << "\n";
    cout << find(1) << "\n";
    show();
    cout << "\n";
    return 0;
}