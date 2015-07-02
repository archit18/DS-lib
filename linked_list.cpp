
#include "linked_list.h"


int main()
{
	LinkedList list;
	for (int i=0;i<5;i++)	list.append(i);
	list.display();
	cout << endl << list.maxElement() << " " << list.minElement()<< endl;
	return 0;
}