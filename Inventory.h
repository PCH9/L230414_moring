#pragma once
#include <iostream>

class Inventory
{
public:
	Inventory(class Item* Resource);
	virtual ~Inventory();
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

