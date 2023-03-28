
#include <iostream>

using namespace std;

int main()
{
   //currency converter
   const double usd_per_eur{ 1.19 };

   cout << "Welcome to our currency converter!" << endl;
   cout << "Please enter a value in euros: ";

   double entered_value{ 0.0 };
   double result_in_dollars{ 0.0 };

   cin >> entered_value;

   cout << endl;

   result_in_dollars = usd_per_eur * entered_value;

   cout << "You will receive " << result_in_dollars << "$ dollars." << endl;
   cout << endl;


   //type coersion


   int total{};
   int num1{}, num2{}, num3{};

   const int count{ 3 };

   cout << "Please enter 3 integers, seperated by space: " << endl;
   cin >> num1 >> num2 >> num3;

   total = num1 + num2 + num3;

   double average{ 0.0 };

   average = static_cast<double>(total) / count;
   //average = (double)total/count; old-style

   cout << "The sum of your numbers is: " << total << endl;
   cout << "The average of your numbers is: " << average << endl;

   cout << endl;

   //testing for equality

   bool result{ false };
   result = (100 == 50 + 50);

   result = (num1 != num2);

   cout << (num1 == num2) << endl;  // 0 or 1
   cout << std::boolalpha;
   cout << (num1 == num2) << endl; //true or false
   cout << std::noboolalpha;


   cout << endl;
   return 0;
}

