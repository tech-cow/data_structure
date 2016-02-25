#include <cstdlib>
#include <iostream>
#include "List.h"

using namespace std;

List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::AddNode(int addData)
{
	nodePtr n = new node;
	//a->b   is  (*a).b
	n->next = NULL;
	n->data = addData;

	/*假如不是Emtpy的list，设置目前的node为head*/
	if (head != NULL)
	{
		curr = head;
	/*假如接下来的node不是NULL，cur将指向下一个node*/
		while(curr->next != NULL){
			curr = curr->next;
		}
	/*设置我们新加的node为下一个node*/
		curr->next = n;
	}

	else
	{
		head = n;
	}
}

void List::DeleteNode(int delData)
{
	nodePtr delPtr = new node;
	curr = head;
	temp = head;
	while(curr != NULL && curr->data != delData){
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL){
		cout << delData << "wasn't found\n";
		delete delPtr;
	}

	else{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if(delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}

		delete delPtr;
		cout <<"The value " << delData << " was deleted\n";
	}

}

void List::PrintList()
{
	curr = head;
	while(curr != NULL){
		cout << curr->data << endl;
		curr = curr->next;
	}
}

