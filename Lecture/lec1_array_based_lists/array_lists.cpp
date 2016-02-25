#include <iostream>
#include "array_lists.h"
using namespace std;


UnsortedType::UnsortedType()
{
	length = 0;
}

void UnsortedType::MakeEmpty()
{
	length = 0;
}

bool UnsortedType::IsFull() const 
{
	return length == 10;
}

void UnsortedType::InsertItem(int item)
{
	if (IsFull())
	{
	}
	else
	{
		info[length] = item;
		length++;
	}	
}

void UnsortedType::DeleteItem(int item)
{
	for (int i = 0; i < length; ++i)
	{
		if (info[i] == item)
		{
			info[i] = info[length - 1];
			length--;		
		}
	}
	// info[] = 
}

void UnsortedType::Display()
{
	for (int i = 0; i < length; ++i)
	{
		cout << info[i] << endl;
	}

}
