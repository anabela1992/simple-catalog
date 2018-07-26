#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item
{
private:
	int id;
	std::string name;

public:
	Item(int _id, std::string _name);
	//~Item();
	int getId();
	std::string getName();
	void setName(std::string _name);

};