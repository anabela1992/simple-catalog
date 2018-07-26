#include <iostream>
#include <string>

class Item {
private:
	int id;
	std::string name;

public:
	Item(int _id, std::string _name){
		id = _id;
		name = _name;
	}

	~Item();

	int getId(){
		return id;
	}

	std::string getName(){
		return name;
	}

	void setName(std::string _name){
		name = _name;
	}
};