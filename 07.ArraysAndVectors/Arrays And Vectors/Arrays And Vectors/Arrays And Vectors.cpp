// Arrays And Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
   char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
   cout << "The first vowel is: " << vowels[0] << endl;
   cout << "The last vowel is: " << vowels[4] << endl;

   //cin >> vowels[5]; //out of bounds

   cout << endl;

   ///////////////////

   int test_scores[5]{};
   //int test_scores[5]{}; -- > this way it will all be initialized to 0s;

   cout << "First score at index 0: " << test_scores[0] << endl;
   cout << "Score at index 1: " << test_scores[1] << endl;
   cout << "Score at index 2: " << test_scores[2] << endl;
   cout << "Score at index 3: " << test_scores[3] << endl;
   cout << "Score at index 4: " << test_scores[4] << endl;

   cout << endl;

   //////////////////
   cout << "Notice what the name of the array name is: " << test_scores << endl;
   // -> this is the location of the array;
   cout << endl;

   ///VECTORS///

   vector<int> vector_scores{ 100, 95,88,87,88 };
   //int test_scores[5]{}; -- > this way it will all be initialized to 0s;

   cout << "First score at index 0: " << vector_scores[0] << endl;
   cout << "Score at index 1: " << vector_scores.at(1) << endl;
   cout << "Score at index 2: " << vector_scores[2] << endl;
   cout << "Score at index 3: " << vector_scores[3] << endl;
   cout << "Score at index 4: " << vector_scores[4] << endl;

   cout << endl;

   cin >> vector_scores.at(0);

   vector_scores.push_back(33);//adds an element to the end of the vector; 

   cout << "Score at index 0: " << vector_scores[0] << endl;
   cout << "Score at index 5: " << vector_scores[5] << endl;

   //simulate an error message: 
   //cout << "Score at index 99: " << vector_scores[99] << endl;

   vector <int> all_100s(3, 100); // 3 elements all initialized to 100

   cout << "Number of scores in the vector: " << all_100s.size() << endl;
   cout << endl;

   //////////
   //example of a 2d-vector:
   //////////

   vector <vector<int>> movie_ratings{
      {1,2,3,4},
      {1,2,4,4},
      {1,3,4,5}
   };

   cout << "Here are some of the movie ratings: " << endl; 
   cout << movie_ratings[0][0] << endl;
   cout << movie_ratings[0][3] << endl;
   cout << "And in this case, we will use vector syntax: " << endl;
   cout << movie_ratings.at(0).at(2) << endl;

   cout << endl;
   return 0;
}

