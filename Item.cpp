#include "Item.h"
#include <iostream>

Item::Item(int _id, std::string _name){
	id = _id;
	name = _name;
}

int Item::getId(){
	return id;
}

std::string Item::getName(){
	return name;
}

void Item::setName(std::string _name){
	name = _name;
}
