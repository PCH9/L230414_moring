#include <iostream>
#include "Character.h"
#include "Inventory.h"
#include "Item.h"
#include "Knife.h"
#include "Gun.h"
#include "Club.h"
#include "Juice.h"
#include "Bread.h"

using namespace std;

int main()
{
	Character* MyCharacter = new Character();

	Knife* MyKnife = new Knife();

	Inventory* ItemKnife = MyCharacter->MyInventory(MyKnife);

	delete MyCharacter;
	delete ItemKnife;
	return 0;
}