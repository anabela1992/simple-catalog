#ifndef GAME_H
#define GAME_H
#include <string>

class Game : public Item{

private:
	std::string console;
	bool complete;
	std::string code;
	std::string region;

public:
	Game(std::string _console, bool _complete, std::string _code,
		std::string _region) : Item(int _id, std::string _name);
	~Game();

	std::string getConsole();
	bool isComplete();
	std::string getCode();
	std::string getRegion();

};

#endif