#include <iostream>
using namespace std;

int main()
{
    // int marks[] = {10, 23, 23, 90, 65};
    int size = 5;
    int marks[5] = {10, 23,33, 90, 10};
    // int sizes= sizeof(marks) / sizeof(int);
    // cout << marks[9];

    //  access element using loop

    // cout << "Enter marks: " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> marks[i];
    // }
    cout << "Marks: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    int arr2[5] = {10,20,3,4,5};


    int lowestMarks = INT64_MAX;
    int highestMarks = INT64_MIN;
    int lowestMarkIndex = 0;
    int higestMarkIndex = 0;
    for (int i = 0; i < size; i++)
    {
      lowestMarks = min(arr2[i], lowestMarks);
      highestMarks = max(arr2[i], highestMarks);
  

   }
    cout << "Lowest marks :: " << lowestMarks << endl;
    // cout << "Lowest marks index :: " << lowestMarkIndex << endl;
    cout << "Highest marks :: " << highestMarks << endl;
    cout << "Highest marks index :: " << higestMarkIndex << endl;

    return 0;

}