#pragma once;

#include <iostream>;
#include "Prints.h"
#include "../../3/Program/DynamicIntArrayData.h"

using std::cout;
using std::cin;
using std::endl;

void printCharsLine(char symbol, short count) {
	for (int i = 0; i < count; i++) cout << symbol;
}

void beautifulPrint(const char *message, short countInline, char symbol) {
	if (!countInline) {
		cout << message;
		return;
	}
	printCharsLine(symbol, countInline);
	cout << " " << message << " ";
	printCharsLine(symbol, countInline);
	cout << endl;
}

void printNumsArray(DynamicIntArrayData numbersData, int rowLength) {
	for (int i = 0, positionInLine = 0; i < numbersData.length; i++)
	{
		cout << numbersData.arr[i] << " ";

		if (positionInLine == rowLength) {
			cout << endl << endl;
			positionInLine = 0;
		}
		else positionInLine++;
	}
	cout << endl;
}

void printBorderBottom(int count) {
	printCharsLine('-', count);
	cout << endl << endl;
}


void printFilteredWordsByString(char str[], int maxLength, const char delims[]) {
	char* currentWord = strtok(str, delims);
	
	if (currentWord == NULL) {
		cout << "WORDS WERE NOT FOUND" << endl;
		return;
	}

	while (currentWord != NULL) {
		if (strlen(currentWord) < maxLength) {
			cout << currentWord << endl;
		}
		currentWord = strtok(NULL, delims);
	}

	cout << endl;

}