

#include <iostream>

using namespace std;

int main()
{

	const int price_per_room = 30;

	cout << "Hello, welcome to Frank's Carpet Claning Service! \n" << endl; 
	cout << "How many rooms would you like cleaned?" << endl; 

	int number_of_rooms{ 0 };
	float tax = 1.06;

	cin >> number_of_rooms;

	float estimated_cost{ 0.0 };


	estimated_cost = number_of_rooms * price_per_room;
	float total_cost = estimated_cost * tax;

	cout << "======================================" << endl;
	cout << "Estimate for carpet cleaning service: \n" << endl;
	cout << "Number of rooms: " << number_of_rooms << endl;
	cout << "Price per room: $" << price_per_room << endl;
	cout << "Total cost: $" << estimated_cost << endl;
	cout << "Tax included: $" << total_cost << endl;
	cout << "======================================" << endl;
	cout << "This estimate is valid for 30 days!" << endl;

	return 0;
}

