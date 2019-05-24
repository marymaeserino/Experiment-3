#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int province, day;
	int tempeA[7];
	int tempeB[7];
	int tempeC[7];
	char provA [3] = "A";
	char provB [3] = "B";
	char provC [3] = "C";
	
	cout << "This program will show the temperature for province A, B and C respectively." << endl;
	cout << "Enter the temperature for province A, B and C." << endl;
	

		for(int day = 0; day < 7; day++)
        {
            cout << "province " << provA << ", day " << day + 1 << " : ";
            cin >> tempeA[day];
        }
	
	
		for(int day = 0; day < 7; day++)
        {
            cout << "province " << provB << ", day " << day + 1 << " : ";
            cin >> tempeB[day];
        }

		for(int day = 0; day < 7; day++)
        {
            cout << "province " << provC << ", day " << day + 1 << " : ";
            cin >> tempeC[day];
        }
	
    
    
	cout << "\nTemperature of province A, province B and province C for a week:\n";

  
    for(int day = 0; day < 7; day++)
        {
            cout << "province " << provA << ", day " << day + 1 << " : " << tempeA[day] << endl;
           
        }
        
    for(int day = 0; day < 7; day++)
        {
            cout << "province " << provB << ", day " << day + 1 << " : " << tempeB[day] << endl;
           
        }
        
    for(int day = 0; day < 7; day++)
        {
            cout << "province " << provC << ", day " << day + 1 << " : " << tempeC[day] << endl;
           
        }
    
	
	
	
	_getch();
	return 0;
	
}
