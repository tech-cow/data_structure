#include <iostream>
#include "array_lists.h"
using namespace std;

//ADT: Abstract Data Type, a type consists methods that is
//abstract to the users that the users don't need to understand





int main(int argc, char const *argv[])
{
	UnsortedType test;
	test.InsertItem(4);
	test.InsertItem(3);
	test.InsertItem(2);
	test.InsertItem(1);
	test.InsertItem(100);

	test.DeleteItem(4);
	test.MakeEmpty();
	test.InsertItem(4);


	test.Display();
}