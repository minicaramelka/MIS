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
int& LList::operator[](const size_t pos) const
{
	return getNode(pos)->value;
}

LList::Node* LList::getNode(const size_t pos) const
{
	if (pos < 0) {
		assert(pos < 0);
	}
	else if (pos >= this->_size) {
		assert(pos >= this->_size);
	}

	Node* bufNode = this->_head;
	for (int i = 0; i < pos; ++i) {
		bufNode = bufNode->next;
	}

	return bufNode;
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
        }
        else
        {
            head = nd;
            nd->next = NULL;
        }
    }

void LList::pop_back(int val)
    {
    Node *current = head;



    }

void LList::pop_front(int val)
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
    l.push_back(1);
	l.push_front(0);
	l.push_back(2);
	for(size_t i = 0; i < 3; ++i, cout << " ")
        cout << l[i];


    }
