#include "Inventory.h"
#include"Item.h"
#include<iostream>

Inventory::Inventory(Item* Resource)
{
	Name = Resource->GetName();
	std::cout << "�κ��丮�� �ִ� " << Name << std::endl;
}

Inventory::~Inventory()
{
}
