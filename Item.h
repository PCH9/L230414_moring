#pragma once
#include "Inventory.h"
#include <iostream>


class Item
{
public:
	Item();
	virtual ~Item();
	
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

