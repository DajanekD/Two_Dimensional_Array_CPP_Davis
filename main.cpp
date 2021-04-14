 //Student Name: Dajanek Davis
//Teacher: Dr. Tyson McMillan
//Date: April 12, 2021
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;
/*
Research Input data: go to http://www.weather.com
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.
//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities
//Data Table
//City X, Day X: Temp
Seattle, WA, Day 1: 63
Seattle, WA, Day 2: 70
Seattle, WA, Day 3: 74
Seattle, WA, Day 4: 76
Seattle, WA, Day 5: 75
Seattle, WA, Day 6: 72
Seattle, WA, Day 7: 67
New Orleans, LA, Day 1: 74
New Orleans, LA, Day 2: 73
New Orleans, LA, Day 3: 70
New Orleans, LA, Day 4: 73
New Orleans, LA, Day 5: 65
New Orleans, LA, Day 6: 71
New Orleans, LA, Day 7: 74
*/
 
int main()
{
      const int CITY = 2;
      const int WEEK = 7;
     
 
    int temperature[CITY][WEEK];
    //Note your input data from the above
    cout << "Enter all temperature for a week of first city and then second city. \n";
 
    // Inserting the values into the temperature array
    //note for every dimension of the array you need a for loop 2 dimensions = 2 for loops
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }
 
    cout << "\n\nDisplaying Values:\n";
 
    // Accessing the values from the temperature array
    for (int i = 0; i < CITY; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
          
            cout << "Seattle " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j]
            << endl;
        }
        
    }
   /*For up to 5 Points Extra Credit
      Expand this program:
      1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
      2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
      3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.
      4. print the results of temperature[i][j]; to the screen.
    */
 
    return 0;
};
