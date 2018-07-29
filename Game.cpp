#include <iostream>
#include <string>
#include "Item.h"
#include "Game.h"

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


std::string Game::getConsole(){
	return console;
}

bool Game::isComplete(){
	return complete;
}

std::string Game::getCode(){
	return code;
}

std::string Game::getRegion(){
	return region;
}
