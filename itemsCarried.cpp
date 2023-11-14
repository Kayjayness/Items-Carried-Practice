#include "functions.h"

// Practice assignment (Vector practice)
//
// Define a list of items a game character would be carrying around in their inventory
// Store the number of each individual item the player is carrying
// The player should be carrying the same amount of item variations as the item list
// Write a function that shows how many total items are being carried
// write a function that print the amount of each individual item
// Make sure the functions handle pluralization of the items

int main()
{
	std::vector<int> playerInventory{ 3,3,2,1,1,1,10 };
	assert(std::ssize(playerInventory) == Items::MaxItems && "Vector Length does not match number of item types");

	printIndividualItems(playerInventory);
	printTotalItems(playerInventory);
	
	return 0;
}