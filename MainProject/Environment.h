#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_
#include <string>
#include "Indoors.h"
#include "Items.h"
using namespace std;

class environment{
protected: //Has to be protected so subclasses have access to it - Can someone confirm this?
	string description;
	string type;
	bool isLit;
	bool has_trap;
	item im[2];

public:
	environment();
	~environment();
	
	// Modifying protected variables
	void SetDescription(string);
	void SetType(string);
	void SetLight(bool);
	void SetTrap(bool);
	void SetItem(item, item);

	// Returing protected variables
	string GetDescription();
	string GetType();
	bool GetLight();
	bool GetTrap();


};
#endif