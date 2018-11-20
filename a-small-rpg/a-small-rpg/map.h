#pragma once
#include <iostream>

class Map
{
private:
	char finalMap[25] =
	{'m', 'g', 'w', 'g', 'm',
	 'f', 'g', 'w', 't', 'f',
	 'w', 'w', 'w', 'w', 'w',
	 'f', 'g', 'w', 'g', 'f',
	 'm', 'g', 'w', 'g', 'm' };
	char playerMap[25] =
	{'?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?' };
public:
	int mapSizeX = 5;
	int mapSizeY = 5;
	void printMap()
	{
		for (int i = 0; i < mapSizeX*mapSizeY; i++)
		{
			//std::cout << playerMap[i];
			if ((i % 5) == 0)
			{
				std::cout << "\n";
				std::cout << finalMap[i] << " ";
			}
			else
			{
				std::cout << finalMap[i] << " ";
			}
		}
	}

};