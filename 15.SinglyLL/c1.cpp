// Singly Linked List

#include<iostream>
using namespace std;

class SLL
{
    class Node
    {
        public:
        int data;
        Node* next;
    };

    Node *head, *tail;

    public:

    SLL(int val)
    {
        head = new Node;
        head->data = val;
        head->next = nullptr;
        tail = head;
        cout << endl << "Linked List is created" << endl;
    }

    void push_front(int val)
    {
        Node* temp = new Node;
        temp -> data = val;
        temp -> next = head;

        if(head == nullptr)
            tail = head = temp;
        else
            head = temp;
    }

    // pushback using tail pointer
    void push_back1(int val)
    {
        Node* temp = new Node;
        temp -> data = val;
        temp -> next = nullptr;

        if(head == nullptr)
        {
            head = tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }

    }

    // pushback without using tail pointer
    void push_back2(int val)
    {
        Node* temp = new Node;
        temp->data = val;
        temp->next = nullptr;

        if(head == nullptr)
        {
            tail = head = temp;
            temp = nullptr;
            return;
        }

        Node* ttemp = head;

        while(ttemp->next != nullptr)
        {
            ttemp=ttemp->next;
        }

        ttemp->next = temp;
        tail = temp;
    }

    // Deletion of first node
    void deleteHead()
    {
        if(head == nullptr)
        {
            cout << "Create a Linked List First..";
            return;
        }

        Node* temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
    }

    // Find the length of SLL
    int lengthOfSLL()
    {
        if(head == nullptr)
        {
            return 0;
        }

        Node* temp = head;
        int length = 1;

        while(temp->next != nullptr)
        {
            temp = temp->next;
            length++;
        }

        return length;
    }

    // Search in SLL
    bool searchSLL(int val)
    {
        Node* temp = head;

        while(temp != nullptr)
        {
            if(temp->data == val)
            {
                return true;
            }
            temp = temp->next;
        }

        return false;
    }
    
    // Display all the nodes of SLL
    void display()
    {
        Node *temp = head;
        while(temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }        
    }

    // Cleaning all the nodes of SLL
    ~SLL()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            head = head -> next;
            delete temp;
            temp = head;
        }
        cout << endl << "All Clear";
    }
};

int main()
{
    SLL list(10);

    list.push_front(20);
    list.push_front(30);
    list.push_front(40);
    list.push_front(50);
    list.push_back1(60);
    list.push_back1(70);
    list.push_back1(80);
    list.push_back1(90);
    list.push_back2(100);
    list.push_back2(110);
    list.push_back2(120);
    list.push_back2(130);

    list.display();
    cout << endl;
    list.deleteHead();
    list.display();

    cout << endl << list.searchSLL(65);
}