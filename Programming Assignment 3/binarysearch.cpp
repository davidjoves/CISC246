/**
 * Name: David Joves
 * 
 * Programming Assignment 3 - The Binary Search Algorithm
 * 
 * Date: 02 - MAR - 2023
*/
#include <iostream> 
#include <iomanip>
#include <limits>

using namespace std;

//Global Constant
const int SIZE = 10;

// Function Prototypes

bool inAscendingOrder(int nums[]);
int arrayLength(int nums[]);
int binarySearch(int nums[], int value);
void promptUser();

int main()
{
    promptUser();
    return 0;
}

// ********************************************************
// name:      isAscendingOrder
// called by: promptUser
// passed:    int nums[]
// returns:   bool
// calls:     nothing
// The isAscendingOrder function validates that    *
// the user entered their numbers in ascending order      *                                    
// ********************************************************
bool inAscendingOrder(int nums[])
{
    for(int i = 1; i < SIZE; i++)
    {
        if(nums[i] < nums[i-1])
        {
            return false;
        }
    }
    return true;
}
// ********************************************************
// name:      arrayLength
// called by: binary Search
// passed:    int nums[]
// returns:   int length
// calls:     nothing
// The arrayLength function returns the length of the     *
// array to be used in the binarySearch function.         *                                    
// ********************************************************
int arrayLength(int nums[])
{
    int length = 0;
    for(int i = 0; i < SIZE; i++)
    {
        length++; 
    }
    return length;
    
}
// ********************************************************
// name:      binarySearch
// called by: promptUser
// passed:    int nums[]
// returns:   int index or -1
// calls:     arrayLength
// The binarySearch function returns the index user's     *
// desired number inside an array, using the algorithm    *
// binary search. If number is not inside, returns -1     *                                    
// ********************************************************
int binarySearch(int nums[], int value)
{
    int arrLength = arrayLength(nums);
    int left = 0;
    int right = arrLength - 1;
    
    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(nums[mid] == value)
        {
            return mid + 1; 
        }
        else if(nums[mid] < value)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    return -1;
}
// ********************************************************
// name:      promptUser
// called by: main
// passed:    int nums[]
// returns:   int index or -1
// calls:     binarySearch, isAscendingOrder
// The promptUser function allows user interaction to     *
// create an array of size 10, and uses the binarySearch  *
// function to find their desired number                  *             
// ********************************************************
void promptUser()
{
    int userNums[10];
    int userInt = 0;
    int index = 0;
    char runAgain;
    
    while (true)
    {
        cout << "Enter 10 integers in every new line in ascending order! " << endl;
        for(int i = 0; i < SIZE; i++)
        {
            if(!(cin >> userNums[i]))
            {
                cout << "Enter only integers!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }
        }
        if(inAscendingOrder(userNums) != true)
        {
            cout << "Put into ASCENDING order only!"<< endl;
            continue; 
        }
        else
        {
            cout << "Your array:" << endl;
            cout << "[ ";
            for(int element : userNums)
            {
                cout << element << " ";
            }
            cout << "]" << endl;
        }
        while(true)
        {
            cout << "Enter number you want to search for!" << endl;
            if(!(cin >> userInt))
            {
                cout << "Enter only integers!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
            {
                index = binarySearch(userNums, userInt);
                if(index == -1)
                {
                    cout << "Not in array, try again: " << endl;
                    continue; 
                }
                else 
                {
                    cout <<"Element: " << userInt << " is located at index: " << index << endl;
                    break;
                } 
            }

        }
        cout << "Run again? " << endl;
        cin >> runAgain;
     
        if(runAgain == 'y' || runAgain == 'Y')
        {
            continue; 
        }
        else 
        {
            break;
        }
    
    }
}
