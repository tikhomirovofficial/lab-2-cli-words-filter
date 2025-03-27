#include "Prints.h";

using std::cout;
using std::cin;
using std::endl;

void printCharsLine(char symbol, short count) {
	for (int i = 0; i < count; i++) cout << symbol;
}

void beautifulPrint(const char* message, short countInline, char symbol) {
	if (!countInline) {
		cout << message;
		return;
	}
	printCharsLine(symbol, countInline);
	cout << " " << message << " ";
	printCharsLine(symbol, countInline);
	cout << endl;
}

void printWordsLessThan(char string[], int maxLength) {
	int wordsCounter = 0;
	char seps[] = ", ";
	char* currentWord = strtok(string, seps); // set zero terminator to first delim

	while (currentWord != NULL) {
		if (strlen(currentWord) < maxLength) {
			cout << ++wordsCounter << currentWord << endl;
		}
		currentWord = strtok(NULL, seps);
	}

	if (!wordsCounter) {
		cout << endl;
		beautifulPrint("YOUR STRING DOESN'T HAVE SUITABLE WORDS", 3, '*');
	}
}