#pragma once

class Character
{
public:
	Character();
	virtual ~Character();

	class Inventory* MyInventory(class Item* Resource);
};

