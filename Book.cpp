#include <iostream>
#include <string>
#include <Item.h>

class Book : public Item{
private:
	std::string author;
	bool saga;
	std::string sagaName;
	int sagaVolume;
	std::string genre;

public:
	Book(std::string _author, bool _saga, std::string _sagaName,
		int _sagaVolume, std::string _genre) : Item(int _id, std::string _name){

		author = _author;
		saga = _saga;
		if(saga){
			sagaName = _sagaName;
			sagaVolume = sagaVolume;
		}else{
			sagaName = NULL;
			sagaVolume = NULL;
		}
		genre = _genre;
		
	};

	~Book();


	std::string getAuthor(){
		return author;
	}

	bool isSaga(){
		return saga;
	}

	std::string getSagaName(){
		return sagaName;
	}

	int getSagaVolume(){
		return sagaVolume;
	}

	std::string getGenre(){
		return genre;
	}

	
};