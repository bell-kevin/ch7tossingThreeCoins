#pragma once
#include <string>
#include <ctime>
using namespace std;
string sideUp;
class Coin	
{
public:
	Coin();
	void toss(); //member function
	string getSideUp(); //accessor function
private:
	string sideUp; //member variable
};
Coin::Coin() // default constructor
{
	unsigned seed; 
	seed = time(0);
	srand(seed); //seed the random number generator
	toss(); //call the toss function
}
void Coin::toss() // member function
{
	int value;
	value = rand() % 2; // 0 or 1 randomly
	if (value == 0)
		sideUp = "heads";
	else
		sideUp = "tails";
	
}
string Coin::getSideUp() // accessor function
{
	return sideUp;
}