#include "Character.h"
#include "Inventory.h"
#include "Item.h"
#include "Knife.h"
#include "Gun.h"
#include "Club.h"
#include "Juice.h"
#include "Bread.h"
#include <iostream>

Character::Character()
{
}

Character::~Character()
{
}

Inventory* Character::MyInventory(Item* Resource)
{
	Inventory* MyInventory = new Inventory(Resource);
	delete Resource;
	return MyInventory;
}
