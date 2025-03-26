#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void printCharsLine(char symbol, short count = 3) {
	for (int i = 0; i < count; i++) cout << symbol;
}

void beautifulPrint(const char* message, short countInline = 3, char symbol = '-') {
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
			cout << currentWord << endl;
			wordsCounter++;
		}
		currentWord = strtok(NULL, seps);
	}

	if (!wordsCounter) {
		cout << endl;
		beautifulPrint("YOUR STRING DOESN'T HAVE SUITABLE WORDS");
	}
}


int main() {
	const int MAX_STRING_SIZE = 256;
	char str[MAX_STRING_SIZE];
	int maxLenOfWord;

	beautifulPrint("WELCOME TO LABORATORY 2");
	cout << endl;

	beautifulPrint("PLEASE ENTER WORDS SPLITTING BY COMMA: ", 0);
	cin.getline(str, MAX_STRING_SIZE);

	beautifulPrint("PLEASE ENTER MIN LENGTH OF WORD FOR FILTER: ", 0);
	cin >> maxLenOfWord;

	printWordsLessThan(str, maxLenOfWord);
	cout << endl;

	beautifulPrint("THANK YOU");

	return 0;
}