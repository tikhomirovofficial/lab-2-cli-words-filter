#include "Prints.h";

using std::cout;
using std::cin;
using std::endl;

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

	cout << endl;
	beautifulPrint("FILTERED WORDS:");

	printFilteredWordsByString(str, maxLenOfWord);

	return 0;
}