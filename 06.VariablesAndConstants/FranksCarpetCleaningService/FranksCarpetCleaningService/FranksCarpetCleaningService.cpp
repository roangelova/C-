

#include <iostream>

using namespace std;

int main()
{

	const double price_per_small_room = 30.0;
	const double price_per_large_room = 35.0;

	int number_of_small_rooms{ 0 };
	int number_of_large_rooms{ 0 };

	const double tax = 1.06;

	cout << "Hello, welcome to Frank's Carpet Claning Service! \n" << endl; 

	cout << "How many small rooms would you like cleaned?" << endl; 
	cin >> number_of_small_rooms;

	cout << "How many large rooms would you like cleaned?" << endl;
	cin >> number_of_large_rooms;

	double estimated_cost{ 0.0 };

	estimated_cost = ((number_of_small_rooms * price_per_small_room ) + (number_of_large_rooms * price_per_large_room));

	double total_cost = estimated_cost * tax;

	cout << "======================================" << endl;
	cout << "Estimate for carpet cleaning service: \n" << endl;
	cout << "Number of small rooms: " << number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Total cost: $" << estimated_cost << endl;
	cout << "Tax included: $" << total_cost << endl;
	cout << "======================================" << endl;
	cout << "This estimate is valid for 30 days!" << endl;

	return 0;
}

