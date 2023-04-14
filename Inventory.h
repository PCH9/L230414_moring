#pragma once
#include "Character.h"
#include <iostream>

class Inventory : public Character
{
public:
	Inventory(class Item* Resource);
	virtual ~Inventory() override;
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

