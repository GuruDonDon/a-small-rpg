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
	const void printMap()
	{
		std::cout << "#| ";
		for (int j = 0; j < mapSizeX; j++)
		{
			std::cout << j+1 << " ";
		}
		for (int i = 0; i < mapSizeX*mapSizeY; i++)
		{
			if ((i % 5) == 0)
			{
				std::cout << "|\n";
				std::cout << i/5+1 << "| " << playerMap[i] << " ";
			}
			else
			{
				std::cout << playerMap[i] << " ";
			}
		}
		std::cout << "|\n";
	}
	const void revealZone(int x, int y)
	{
		playerMap[(y - 1) * mapSizeY + x - 1] = finalMap[(y - 1) * mapSizeY + x-1];
		printMap();
	}

};