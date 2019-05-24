#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	
	int integer, num, result, size, value,  words, numA, sizeA;
	int numbers[100];
	char text[101];
	
	cout << "This program will sort characters and integers in a systematic order." << endl;
	cout << "Enter the array size:";
	cin >> size;	
	cout << "Enter integers:";
	
	for (integer = 0; integer < size; integer++)
	{
		cin >> numbers[integer];
	}
	
	
	for (integer = 0; integer < size; integer++)
	{
		for(num = integer + 1; num < size; num++)
		{
			if(numbers[integer] > numbers[num])
			{
				value = numbers[integer];
				numbers[integer] = numbers[num];
				numbers[num] = value;
			}
		}
	}
	
	cout << "Enter character size:";
	cin >> sizeA;
	cout << "Encode characters:";
	
	for (words = 0; words < sizeA; words++)
	{
		cin >> text[words];
	}
	
	
	for (words = 0; words < sizeA; words++)
	{
		for(numA = words + 1; numA < sizeA; numA++)
		{
			if(text[words] > text[numA])
			{
				result = text[words];
				text[words] = text[numA];
				text[numA] = result;
			}
		}
	}
	
	
	
	cout << "The resulting arrangement of integers:" << endl;
	for(integer = 0; integer < size; integer++)
	{
		cout << numbers[integer] << ' ';
	}
	
	cout << "The resulting arrangement of characters:" << endl;
	for (words = 0; words < sizeA; words++)
	{
		cout << text[words] << ' ';
	}
	
	
	
	
	
	_getch();
	return 0;
	
}
