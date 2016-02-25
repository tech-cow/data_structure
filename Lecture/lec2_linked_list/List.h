#ifndef LIST_H
#define LIST_H

class List
{

private:
/*typedef struct node* nodePtr   
typedef解释：对node* 进行改名*/
	typedef struct node
	{
		int data;
		node* next; /*指针*/
	}* nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public:
	/*Constructor:给private variable赋值*/
	List();

	/*
	Step 1: Create a new node, set its end ptr to null
	then set its value to input value
	Step 2: Check if the list is empty by checking
	if the head node is point to NULL
	Step 3: Set the head node to current node or a new node,
	*/
	void AddNode(int addData);

	void DeleteNode(int delData);
	void PrintList();
};


#endif
