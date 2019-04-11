// marbleBag.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Bag.cpp"


using std::cout; //output stream
using std::cin; //input stream
using std::endl; //endl line
using std::string; //string class
using std::vector;


/*
class marble
{
public:
	int size;
	string color;
	int weight;
	

	marble(int size_added, string color_added, int weight_added)
	{
		size = size_added;
		color = color_added;
		weight = weight_added;
	}
	
	marble()
	{
		size = 0;
		color = "";
		weight = 0;
	}

	void printMarbles()
	{
		
		
		cout << "SIZE: " << size << " CM\n" << "COLOR: " << color << "\n" << "WEIGHT: " << weight << " OZ\n" << endl;
	}
};
*/

int main()
{
	int numberMarbles = 0;
	int choice = 0;
	Bag myBag = Bag();
	cout << "Welcome to the marble bag!" << endl;
	/*vector<marble> arr;*/

	while (choice != 4)
	{
		cout << "What would you like to do?" << endl;
		cout << "1. Add a marble to the bag" << endl;
		cout << "2. Pull a marble from the bag randomly" << endl;
		cout << "3. Check the bag of marbles" << endl;
		cout << "4. Exit the program" << endl;

		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
			if (numberMarbles > 10)
			{
				cout << "The bag is full! You cannot add another marble\n" << endl;
			}
			else
			{
				myBag.addMarble();
				numberMarbles++;
			}
			break;

		case 2:
			if (numberMarbles > 0)
			{
				/*
				srand(time(NULL));
				int remove = rand() % arr.size();
				arr.erase(arr.begin() + remove);
				*/
				numberMarbles--;
				
				
				cout << "You've removed a marble from the bag.\n" << endl;
			}
			else
			{
				cout << "There's nothing in the bag. You knew that. Why do I have to tell you?\n" << endl;
			}
			break;

		case 3:
			if (numberMarbles < 1)
			{
				cout << "The bag is empty. You knew that. Why do I have to tell you? \n" << endl;
			}
			else
			{
				cout << "The bag contains the following marbles: \n\n";
				for (int i = 0; i < numberMarbles; i++)
				{
					cout << "=====Marble " << i + 1 << "=====" << endl;
					arr[i].printMarbles();
				}
			}
			break;

		case 4:
			return 0;
		}
	}

	
}


