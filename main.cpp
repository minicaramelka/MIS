#include <iostream>
#include "llist.h"

using namespace std;



LList::LList()
    {
        head = NULL;
    }
LList::~LList()
    {

    }
int& LList::operator[](size_t idx) const
{
	Node* bufNode = this->head;
	for (int i = 0; i < idx; ++i) {
		bufNode = bufNode->next;
	}

	return bufNode->data;
}


void LList::push_back(int val)
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

void LList::push_front(int val)
    {
    Node *nd = new Node[val];

        if(head)
        {
            Node *tmp = head;
            head = nd;
            nd->next = tmp;
            nd->data = val;
        }
        else
        {
            head = nd;
            nd->next = NULL;
            nd->data = val;
        }
    }

void LList::pop_back()
    {
        Node *tmp = head;
        int counter = 0;
        delete head;
    }

void LList::pop_front()
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

size_t LList::size() const{
     int counter=0;
     Node *nd = head;
     while(nd){
        nd = nd->next;
        counter++;
     }
     return counter;
}

void LList::erase_at(size_t idx)
    {

    }
void LList::insert_at(size_t idx, int val)
    {

    }
void LList::reverse()
    {

    }

int main()
    {
    LList l;
    LList b;
    l.push_front(0);
    l.push_back(1);
	l.push_back(2);
	for(size_t i = 0; i < l.size(); ++i, cout << " ")
        cout << l[i];
    cout<<endl;
    l.pop_back();
    for(size_t i = 0; i < l.size(); ++i, cout << " ")
        cout << l[i];
    cout<<endl;



    }
