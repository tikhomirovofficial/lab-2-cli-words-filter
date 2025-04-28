#ifndef PRINTS_H
#define PRINTS_H

#include <iostream>;

void printCharsLine(char symbol, short count = 3);

void beautifulPrint(const char* message, short countInline = 3, char symbol = '-');

void printBorderBottom(int count);

void printFilteredWordsByString(char str[], int maxLength, const char delims[] = " ,.");


#endif // !PRINTS_H


