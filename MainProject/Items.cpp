#include "Items.h"
#include <iostream>

using namespace std;

item::item(bool cons, bool stor)
{
	isConsumable = cons;
	isStorageble = stor;
}