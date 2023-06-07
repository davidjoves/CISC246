#include <iostream>
#include <string>
#include <bitset>

using namespace std;

const int UNIVERSE = 8; 

bool validBitString(string a);

bool validBitString(string a)
{
    for(char bit : a)
    {
        if (bit != '1' && bit != '0' && a.length() != UNIVERSE)
        {
            return false;
        }
    }

    return true; 
}

int main()
{
    while(true)
    {
        string a, b; 
        char runAgain;
        while(true)
        {
            cout <<"Enter the 8 bit string representation of A: " <<endl;
            cin >> a;

            if (a.length() != 8 || validBitString(a) != true)
            {
                cout << "Improper bitstring, try again" << endl;
            }
            else 
            {
                break;
            }
        }
        while(true)
        {
            cout <<"Enter the 8 bit string representation of B: " <<endl;
            cin >> b;

            if (b.length() != 8 || validBitString(a) != true)
            {
                cout << "Improper bitstring, try again" << endl;
            }
            else 
            {
                break;
            }
        }

        unsigned int setA = stoi(a, nullptr, 2);
        unsigned int setB = stoi(b, nullptr, 2);

        unsigned int unionSet = setA | setB;
        unsigned int intersectSet = setA & setB;
        unsigned int compA = ~setA;

        cout << "A union B = " <<  bitset<8>(unionSet) << endl;
        cout << "A intersect B = " << bitset<8>(intersectSet)<< endl;
        cout << "The complement of A = " << bitset<8>(compA) << endl;

        cout << "Run again?" << endl;
        cin >> runAgain;

        if(runAgain == 'y' || runAgain =='Y')
        {
            continue;
        }
        else 
        {
            break;
        }
    }
    return 0;
}