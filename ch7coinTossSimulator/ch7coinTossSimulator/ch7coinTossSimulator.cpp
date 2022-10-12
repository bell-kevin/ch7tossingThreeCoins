// ch7tossingThreeCoins.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "Coins.h"
int main()
{
    std::cout << "Chapter 7 Matching Coins by Kevin Bell\n\n";
	cout << setprecision(2) << fixed;
	Coin quarter;
	Coin dime;
	Coin nickel;
	double myGameTotal = 0.0, computerGameTotal = 0.0, myWholeTotal = 0.0, computerWholeTotal = 0.0;
	string continueProgram = "y";
	while (continueProgram == "y" || continueProgram == "Y" || continueProgram == "Yes" || continueProgram == "YES" || continueProgram == "yes") {
		quarter.toss();
		dime.toss();
		nickel.toss();
		cout << "Your Turn: " << endl;
		cout << "	Quarter is " << quarter.getSideUp() << endl;
		cout << "	Dime is " << dime.getSideUp() << endl;
		cout << "	Nickel is " << nickel.getSideUp() << endl;
		if (quarter.getSideUp() == "heads") {
			myGameTotal += 0.25;
		} 
		if (dime.getSideUp() == "heads") {
			myGameTotal += 0.10;
		}
		if (nickel.getSideUp() == "heads") {
			myGameTotal += 0.05;
		} 
		cout << "Tossed each coin, total is $" << myGameTotal << endl;
		cout << "Computer's Turn: " << endl;
		quarter.toss();
		dime.toss();
		nickel.toss();
		cout << "	Quarter is " << quarter.getSideUp() << endl;
		cout << "	Dime is " << dime.getSideUp() << endl;
		cout << "	Nickel is " << nickel.getSideUp() << endl;
		if (quarter.getSideUp() == "heads") {
			computerGameTotal += 0.25;
		} // end if
		if (dime.getSideUp() == "heads") {
			computerGameTotal += 0.10;
		} // end if
		if (nickel.getSideUp() == "heads") {
			computerGameTotal += 0.05;
		} // end if
		cout << "Tossed each coin, total is $" << computerGameTotal << endl;
		if (myGameTotal > computerGameTotal) {
			cout << "You win! Added " << myGameTotal << " to your total." << endl;
		}
		else if (myGameTotal < computerGameTotal) {
			cout << "You lose!" << endl;
		}
		else {
			cout << "It's a tie!" << endl;
		} // end if
		cout << "Would you like to toss again? (y/n): ";
		cin >> continueProgram;
		cout << endl;
	} // end while
		myWholeTotal += myGameTotal;
		computerWholeTotal += computerGameTotal;
		cout << "Your total is $" << myWholeTotal << endl;
		cout << "Computer's total is $" << computerWholeTotal << endl;
		if (myWholeTotal > computerWholeTotal) {
			cout << "You won the whole game! $" << myWholeTotal*10 << endl;
		}
		else if (myWholeTotal < computerWholeTotal) {
			cout << "You lost!" << endl;
		}
		else {
			cout << "You tied!" << endl;
		} // end if
} // end main
