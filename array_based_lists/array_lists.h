//ADT 就是给用户看的，用户只需要知道结果，不需要知道implementation

class UnsortedType{
public:

UnsortedType();
/****
Constructor
****/

void MakeEmpty();
/****
Make the list empty
How: set length to 0, so the whole list gets erased
****/

bool IsFull() const;
/****
const means method don't modify member variables
Check if the array is full
****/

void InsertItem(int item);
/****
Insert elements
****/


void DeleteItem(int item);
/****
Delete elements
How:Copy the last element, paste it to the target item, 
then delete the last item
****/

void Display();
/****
Display the array
****/

private:
	int length;
	int info[10];
};