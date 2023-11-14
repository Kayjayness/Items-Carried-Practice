#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "enum.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <string>

std::string_view convertPlural(Items::Types);

std::string_view convertSingular(Items::Types);

template <typename T>
void printTotalItems(const std::vector<T>& vectorIn)		// Print total amount of items.
{
	int totalItems{ 0 };
	for (auto& index : vectorIn)
	{
		totalItems += index;
	}
	std::cout << "You have " << totalItems << " total items in your inventory";
}

template <typename T>
void printIndividualItems(const std::vector<T>& vectorIn)	// Print amount of each indiviual item on new line taking into account plurality
{
	int num{ 0 };
	for (auto& index : vectorIn)
	{
		if (index == 1)
		{
			std::cout << "You have " << index << ' ' << convertSingular(static_cast<Items::Types>(num++)) << '\n';
		}
		else
		{
			std::cout << "You have " << index << ' ' << convertPlural(static_cast<Items::Types>(num++)) << '\n';
		}
	}
}

#endif
