// WordsPerMinute.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Words.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>


int main()
{
	std::string choice;
	std::cout << "**********************************************\n";
	std::cout << "HELLO, WELCOME TO THE TYPING TEST GAME\n";
	std::cout << "**********************************************\n";
	/*std::cout << std::endl << std::endl << std::endl;
	std::cout << "Please choose a quote: " << std::endl;
	std::cout << "Dr. Suess" << std::endl;
	std::cin >> choice;
	*/
	bool end = false;
	while (end == false) {
		std::cout << std::endl << std::endl << std::endl;
		std::cout << "Please choose a quote: " << std::endl;
		std::cout << "Suess" << std::endl << "Tolk" << std::endl << std::endl << std::endl;
		std::cin >> choice;


		if (choice == "Suess") {
			std::cout << std::endl << std::endl << std::endl;
			std::chrono::steady_clock clock;
			std::clock_t start = std::clock();

			Words word;
			//word.Suess();
			word.printSuess();
			std::cout << std::endl << std::endl << std::endl;
			std::cout << "START TYPING (PRESS 1 AND THE ENTER KEY TO FINISH): " << std::endl;
			word.inputSuess();

			std::cout << std::endl << std::endl << std::endl;
			std::cout << "================================================================\n";
			std::cout << "You messed up " << word.returnError()<< " words" << std::endl;
			double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
			int wpm = ((word.returnCount() / 5) - (word.returnError()-1)) / (duration / 60);
			if (wpm < 0) {
				wpm = 0;
			}
			std::cout << duration << " seconds have passed: " << std::endl;
			std::cout << "WPM is " << wpm << " words / " << "minute (misspelled word will be counted as a penalty)" << std::endl;
			std::cout << "================================================================\n";
			end = true;

		}
		
		if (choice == "Tolk") {
			std::cout << std::endl << std::endl<<std::endl;
			std::chrono::steady_clock clock;
			std::clock_t start = std::clock();

			Words word;
			//word.Suess();
			word.printTolk();
			std::cout << std::endl << std::endl << std::endl;
			std::cout << "START TYPING: (PRESS 1 AND THE ENTER TO QUIT): " << std::endl;
			word.inputTolk();

			std::cout << std::endl << std::endl << std::endl;
			std::cout << "================================================================\n";
			std::cout << "You messed up " << word.returnError() << " words" << std::endl;
			double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
			int wpm = ((word.returnCount() / 5) - (word.returnError()-1)) / (duration / 60);
			if (wpm < 0) {
				wpm = 0;
			}
			std::cout << duration << " seconds have passed: " << std::endl;
			std::cout << "WPM is " << wpm << " words / " << "minute (misspelled word will be counted as a penalty)" << std::endl;
			std::cout << "================================================================\n";
			end = true;
		}

		else {
			std::cout << "Error: Please type again" << std::endl;
		}

	

	}
	
    return 0;
}

