#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book : public Item{

private:
	std::string author;
	bool saga;
	std::string sagaName;
	int sagaVolume;
	std::string genre;

public:
	Book(std::string _author, bool _saga, std::string _sagaName,
		int _sagaVolume, std::string _genre);

	~Book();

	std::string getAuthor();

	bool isSaga();

	std::string getSagaName();

	int getSagaVolume();

	std::string getGenre();

};

#endif