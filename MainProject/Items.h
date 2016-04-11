#ifndef ITEMS_H_
#define ITEMS_H_
#include <iostream>

class item
{
public:
	item();
	item(bool, bool);
	~item();

private:
	bool isConsumable;
	bool isStorageble;
};


#endif