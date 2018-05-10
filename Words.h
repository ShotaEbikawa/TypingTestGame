#pragma once
#include <string>
#include <vector>
class Words
{
public:
	void Suess();
	void Tolk();
	void Eien();
	void printSuess();
	void printTolk();
	int getSuessSize();
	int getTolkSize();
	Words();
	~Words();
	int inputSuess();
	int inputTolk();
	int returnError();
	int returnCount(std::string word);
	int returnCount();
	int missedWord();
private:
	int count;
	int Track;
	std::vector <std::string> suess = { "I", "'", "m", " ", "g", "l", "a", "d", " ", "w","e", " ", "h", "a", "d", " ", "t",
	"h", "e", " ", "t", "i", "m", "e", "s", " ", "t", "o", "g", "e", "t", "h", "e", "r", " ", "j", "u", "s", "t", " ",
	"t", "o", " ", "l", "a", "u", "g", "h", " ", "a", "n", "d", " ", "s", "i", "n", "g", " ",
	"a", " ", "s", "o", "n", "g", "," ," ", "s", "e", "e", "m", "s", " " , "l", "i", "k", "e", " ", "w", "e", " ", "j", "u", "s", "t"
	, " ", "g", "o", "t", " ", "s", "t", "a", "r", "t", "e", "d", " ", "a", "n", "d", " ", "t", "h", "e", "n", " ", "b", "e", "f", "o", "r",
	"e", " ", "y", "o", "u", " ", "k", "n", "o", "w", " ", "i", "t", ",", " ", "t", "h", "e", " ", "t", "i", "m", "e", "s", " ", "w", "e",
		" ","h", "a", "d", " ", "t", "o", "g","e","t","h","e","r", " ", "w","e","r","e", " ", "g", "o", "n", "e", "." };

	std::vector<std::string> tolk = {"I","t"," ","i","s", " ", "n","o","t"," ","o","u","r"," ","p","a","r","t"," ","t","o"," "
	"m","a","s","t","e","r"," ","a","l","l"," ","t","i","d","e","s"," ","o","f"," ","t","h","e"," ","w","o","r","l","d",","," "
	"b","u","t"," ","t","o"," ","d","o"," ","w","h","a","t"," ","i","s"," ","i","n"," ","u","s"," ","f","o","r"," ","t","h","e",
	" ","s","u","c","c","o","u","r"," ","o","f"," ","t","h","o","s","e"," ","w","h","e","r","e","i","n"," ","w","e"," ","a","r"
	,"e",","," ","u","p","r","o","o","t","i","n","g"," ","t","h","e"," ","e","v","i","l", " ", "i","n"," ","t","h","e"," ","f",
	"i","e","l","d","s"," ","t","h","a","t", " ","w","e"," ","k","n","o","w",","," ","s","o"," ","t","h","a","t"," ","t","h","o",
	"s","e"," ","w","h","o"," ","l","i","v","e"," ","a","f","t","e","r"," ","m","a","y", " ","h","a","v","e"," ","c","l","e","a",
	"n"," ","e","a","r","t","h"," ","t","o"," ","t","i","l","l","."," ","W","h","a","t"," ","w","e","a","t","h","e","r"," ","t",
	"h","e","y"," ","s","h","a","l","l"," ","h","a","v","e"," ","i","s"," ","n","o","t"," ","o","u","r","s"," ","t","o"," ","r",
	"u","l","e","."};

	std::vector<std::string> strsue = { "I'm", "glad", "we", "had", "the", "times", "together", "just", "to", "laugh", "and", "sing",
		"a", "song,", "seems", "like", "we", "just", "got", "started" , "and", "then", "before", "you", "know", "it,", "the", "times",
		"we", "had", "together", "were", "gone." };
	
	std::vector<std::string> strtolk = {"It","is","not","our","part","to","master","all","tides","of","the","world,","but","to","do",
	"what","is","in","us","for","the","succour","of","those","wherein","we","are,","uprooting","the","evil","in","the","fields","that",
	"we","know,","so","that","those","who","live","after","may","have","clean","earth","to","till.","What","weather","they","shall","have"
	,"is","not","ours","to","rule."};
	std::string type;
	int error;
};

