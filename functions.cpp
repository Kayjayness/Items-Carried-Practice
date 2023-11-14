#include "functions.h"

std::string_view convertPlural(Items::Types types)  // Prural conversion type SV because it's used in the same expression
{
	switch (types)
	{
	case Items::healthPotion:	return "Health Potions";
	case Items::manaPotion:		return "Mana Potions";
	case Items::energyPotion:	return "Energy Potions";
	case Items::sword:		return "Swords";
	case Items::shield:		return "Shields";
	case Items::bow:		return "Bows";
	case Items::arrows:		return "Arrows";
	default:			return "Invalid Item";
	}
}

std::string_view convertSingular(Items::Types type)	// Singular conversion type SV because it's used in the same expression
{
	switch (type)
	{
	case Items::healthPotion:	return "Health Potion";
	case Items::manaPotion:		return "Mana Potion";
	case Items::energyPotion:	return "Energy Potion";
	case Items::sword:		return "Sword";
	case Items::shield:		return "Shield";
	case Items::bow:		return "Bow";
	case Items::arrows:		return "Arrow";
	default:			return "Invalid Item";
	}
}
