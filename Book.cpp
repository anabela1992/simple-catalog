#include <iostream>
#include <string>
#include "Item.h"
#include "Book.h"

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
}


std::string Book::getAuthor(){
	return author;
}

bool Book::isSaga(){
	return saga;
}

std::string Book::getSagaName(){
	return sagaName;
}

int Book::getSagaVolume(){
	return sagaVolume;
}

std::string Book::getGenre(){
	return genre;
}
