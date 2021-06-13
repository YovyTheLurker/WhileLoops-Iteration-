// WhileLoops(Iteration).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Basic while loop practice.

#include <iostream>
using namespace std;


int main()
{
 /*Write all the numbers between 100-500 divisible by 3 and 5.*/

	int counter = 100;
	while (counter <=501) {
		if (counter % 3 == 0 && counter % 5 == 0)
			cout << counter << " Is divisible.\n";
		counter++;


	}





	system("pause>0");
}

