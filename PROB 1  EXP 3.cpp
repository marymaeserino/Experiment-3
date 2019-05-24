#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	int i, number, smallest, largest;
	float arr[10], average;
	int sum = 0;
	
	for (i=0; i < 10; i++)
	{
		cout << "Enter the ten numbers:" << endl;
		cin >> number;
		sum = sum+number;
		average = sum/10;
		
		if (i==1)
		smallest =  number;
		
		if (number < smallest)
		smallest = number;
		
		else 
		largest =  number;
	}
	
	cout << "The smallest number is:" << smallest << endl;
	cout << "The largest number is:" << largest << endl;
	cout << "The sum is:" << sum << endl;
	cout << "The average is:" << average << endl;
	
	_getch();
	return 0;
}
