// ch7coinTossSimulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "Coin.h"
using namespace std;
int main()
{
	cout << "Chapter 7 Coin Toss by Kevin Bell\n\n";
	Coin c;
	int heads = 0, tails = 0, tosses = 20;
	cout << "New coin is " << c.getSideUp() << endl;
	for (int count = 1; count <= tosses; count++)
	{
		c.toss();
		if (c.getSideUp() == "heads")
			heads++;
		else
			tails++;
		cout << "Toss " << count << "	" << c.getSideUp() << endl;
	}
	cout << endl;
	cout << "Heads " << heads << " times\n";
	cout << "Tails " << tails << " times\n";
	system("pause");
	return 0;
}