#pragma once
class map {
public:
	int mapSizeX = 5;
	int mapSizeY = 5;
private:
	char finalMap[] =
	{'m', 'g', 'w', 'g', 'm',
	 'f', 'g', 'w', 't', 'f',
	 'w', 'w', 'w', 'w', 'w',
	 'f', 'g', 'w', 'g', 'f',
	 'm', 'g', 'w', 'g', 'm', };
	char playerMap[] =
	{'?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?',
	 '?', '?', '?', '?', '?', };
};