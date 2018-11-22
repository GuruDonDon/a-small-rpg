#include "pch.h"
#include <iostream>
#include "map.h"

int main()
{
	//Creat new map
	Map map;
	map.printMap();
	std::cout << "revealing map segment 2:3\n";
	map.revealZone(2, 3);
	map.printMap();

	/*Game loop
		while game running
		ask for use input
		redraw map
		check if game over -> game = not running
	*/

	//restart game?

	std::cout << "\nProgram ran to the end"; // remove later
}