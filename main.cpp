#include <iostream>
#include "llist.h"

using namespace std;



LList::LList()
    {
        head = NULL;
    }

void push_back(int val, Node *head)
    {
        Node *nd = new Node;
        nd->data = val;
        nd->next = NULL;
        if(head == NULL)
            head = nd;
        else
        {
            Node *current = head;
            while(current->next != NULL)
                current = current->next;
            current->next = nd;
        }
    }

void push_front(int val,Node *head)
    {
    Node *nd = new Node[val];

        if(head)
        {
            Node *tmp = head;
            head = nd;
            nd->next = tmp;
        }
        else
        {
            head = nd;
            nd->next = NULL;
        }
    }

void pop_back(int val, Node *head)
    {
    Node *current = head;



    }

void pop_front(int val, Node *head)
    {
    if(head)
        {
            Node *tmp = head;
            tmp = tmp->next;
            delete head;
            head = tmp;
        }
        else
            cout << "The list is empty!" << endl;
    }

//size_t size() const;

void erase_at(size_t idx)
    {

    }
void insert_at(size_t idx, int val)
    {

    }
void reverse()
    {

    }

int main()
    {

    }
