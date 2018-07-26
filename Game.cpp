#include <iostream>
#include <string>
#include <Item.h>

class Game : public Item {
private:
	std::string console;
	bool complete;
	std::string code;
	std::string region;

public:
	Game(std::string _console, bool _complete, std::string _code,
		std::string _region) : Item(int _id, std::string _name){
		
		console = _console;
		complete = _complete;
		if(complete){
			code = _code;
		}else{
			code = NULL;
		}
		region = _region:
	}

	~Game();

	std::string getConsole(){
		return console;
	}

	bool isComplete(){
		return complete;
	}

	std::string getCode(){
		return code;
	}

	std::string getRegion(){
		return region;
	}
};