#include <iostream>
#include "List.h"

using namespace std;

int main(int argc, char const *argv[])
{
	List n;
	n.AddNode(1);
	n.AddNode(4);
	n.AddNode(3);
	//n.AddNode(3);
	n.DeleteNode(1);
	
	return 0;
}