#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>


using std::cout; //output stream
using std::cin; //input stream
using std::endl; //endl line
using std::string; //string class
using std::vector;

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

class Bag
{
public:
	
	Bag()
	{
		vector<marble> arr;
		
		
	}
	

	void addMarble()
	{
		int userSize;
		string userColor;
		int userWeight;
		
		
		cout << "Give me a size in CM: " << endl;
		cin >> userSize;
		cout << "Give me a color in string form: " << endl;
		cin >> userColor;
		cout << "Give me a weight in OZ: " << endl;
		cin >> userWeight;
		cout << "You've added a marble to the bag.\n" << endl;
		marble myMarble(userSize, userColor, userWeight);
		arr.push_back(myMarble);
	}

	void removeMarble()
	{
		srand(time(NULL));
		int remove = rand() % arr.size();
		arr.erase(arr.begin() + remove);
	}


};