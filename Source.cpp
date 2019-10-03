#include <iostream>
#include <vector>

#include "Animals.h"
#include "Mushrooms.h"
#include "Plants.h"

int main()
{
	std::vector<LiveWorld*> creatures;
	char c;
	for (int i = 0; i != 4; ++i)
	{
		std::cin >> c;
		if (c == 'a')
		{
			creatures.push_back(new Animals(15, "Krc", 4));
		}
		else if (c == 'm')

		{
			creatures.push_back(new Mushrooms(2, "Muhara", 0));
		}
		else
		{
			creatures.push_back(new Plants(1, "Kupus", 0));
		}
	}
	for (LiveWorld* i : creatures)
	{
		std::cout << "My name is: " << i->Name() << " and im " << i->Age() << " old and I have " << i->Legs() << " legs. "  << std::endl;
		delete i;
	}

	
}
