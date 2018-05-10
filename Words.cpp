#include "stdafx.h"
#include "Words.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <sstream>
Words::Words()
{
}

void Suess() {
	std::cout << " I'm glad we had the times together just to laugh and sing a song, \n" <<
		"seems like we just got started and then before you know it, the times we had together were gone. \n";
}
void Tolk() {
	std::cout << "It is not our part to master all the tides of the world, \n" <<
		"but to do what is in us for the succour of those years wherein we are set, \n" <<
		"uprooting the evil in the fields that we know, so that those who live after may have clean earth to till. \n" <<
		"What weather they shall have is not ours to rule. \n";

}

void Eien() {
	std::cout << "Bear in mind that the wonderful things you learn in your schools are the work of many generations. \n" <<
		"All this is put in your hands as your inheritance in order that you may receive it, honor it, \n" <<
		"add to it, and one day faithfully hand it on to your children. \n";
}

void Words::printSuess() {
	for (int i = 0; i < suess.size(); i++) {
		std::cout << suess[i];
	}
	std::cout << std::endl;
}

void Words::printTolk() {
	for (int i = 0; i < tolk.size(); i++) {
		std::cout << tolk[i];
	} 
	std::cout << std::endl;
}

int Words::inputSuess() {
	int keepTrack = 0;
	for (int i = 0; i < strsue.size(); i++) {
		std::cin >> type;
		//std::cout << type<<std::endl;
		std::stringstream linestr(type);
		count = count + type.length();
		if (type != strsue[i]) {
			error++;

		}
		if (type == "1") {
			break;
		}
		keepTrack++;
	}
	
	for (int i = keepTrack; i < strsue.size(); i++) {
		error++;
	}
	Track = keepTrack;
	return error;
}

int Words::inputTolk() {
	int keepTrack = 0;
	for (int i = 0; i < strtolk.size(); i++) {
		std::cin >> type;
		//std::cout << type<<std::endl;
		std::stringstream linestr(type);
		count = count + type.length();
		if (type != strtolk[i]) {
			error++;

		}
		if (type == "1") {
			break;
		}
		keepTrack++;
	}

	for (int i = keepTrack; i < strtolk.size(); i++) {
		error++;
	}
	Track = keepTrack;
	return error;
}

int Words::returnError() {
	if (error < 0) {
		error = 0;
	}
	return error;
}

int Words::getSuessSize() {
	return suess.size();
}

int Words::getTolkSize() {
	return tolk.size();
}

int Words::returnCount(std::string word) {
	count = word.length() + count + 1;
	return count;
}
int Words::returnCount(){
	return count;
}
int Words::missedWord() {
	return error;
}
Words::~Words()
{
}
