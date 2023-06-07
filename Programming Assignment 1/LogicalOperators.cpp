#include <iostream>

using namespace std; 

void truthTable(char in1, char in2);

void truthTable(char in1, char in2)
{
    cout << "Looking at: " << in1 << " and " << in2 << endl;
    if(in1 == 'T' && in2 == 'T')
    {
        cout <<"~T = F" << endl;
        cout <<"T v T = T" << endl;
        cout <<"T ^ T = T" << endl;
        cout <<"T -> T = T" << endl;
    }
    else if(in1 == 'T' && in2 =='F')
    {
        cout <<"~T = F" << endl;
        cout <<"T v F = T" << endl;
        cout <<"T ^ F = F" << endl;
        cout <<"T -> F = F" << endl;
    }
    else if(in1 == 'F' && in2 =='T')
    {
        cout <<"~F = T" << endl;
        cout <<"F v T = T" << endl;
        cout <<"F ^ T = F" << endl;
        cout <<"F -> T = T" << endl;
    }
    else if(in1 == 'F' && in2 =='F')
    {
        cout <<"~F = T" << endl;
        cout <<"F v F = F" << endl;
        cout <<"F ^ F = F" << endl;
        cout <<"F -> F = T" << endl;
    }
}

int main()
{
    char run, arg1, arg2; 

    while(true)
    {
        cout << "Enter the 1st truth value: " << endl;
        cin >> arg1; 
        cout << "Enter the 1st truth value: " << endl;
        cin >> arg2; 

        truthTable(arg1, arg2);
        
        cout <<"Run again?" << endl;
        cin >> run; 

        if(run == 'n' || run == 'N')
        {
            break;
        }
        else if (run == 'y' || run == 'Y')
        {
            continue;
        }
        else
        {
            cin.clear(); 
            cout << "Invalid input, try again" << endl;
            cin >> run;
        }
    }
}
