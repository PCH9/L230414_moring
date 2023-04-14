#include "Inventory.h"
#include"Item.h"
#include<iostream>

Inventory::Inventory(Item* Resource)
{
	Name = Resource->GetName();
	std::cout << "인벤토리에 있는 " << Name << std::endl;
}

Inventory::~Inventory()
{
}
