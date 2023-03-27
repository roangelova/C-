// Arrays And Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
   char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
   cout << "The first vowel is: " << vowels[0] << endl;
   cout << "The last vowel is: " << vowels[4] << endl;

   //cin >> vowels[5]; //out of bounds

   cout << endl;

   ///////////////////

   int test_scores[5];
   //int test_scores[5]{}; -- > this way it will all be initialized to 0s;

   cout << "First score at index 0: " << test_scores[0] << endl;
   cout << "First score at index 1: " << test_scores[1] << endl;
   cout << "First score at index 2: " << test_scores[2] << endl;
   cout << "First score at index 3: " << test_scores[3] << endl;
   cout << "First score at index 4: " << test_scores[4] << endl;

   cout << endl;

   //////////////////
   cout << "Notice what the name of the array name is: " << test_scores << endl;
   // -> this is the location of the array;
}

