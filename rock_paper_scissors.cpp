#include <iostream>
#include <format>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    string user_choice;
    string choices[]{"rock", "paper", "scissors"};
    string comp_choice = choices[rand() % 3];
    cout << "Enter either rock, paper or scissors: " << endl;
    cin >> user_choice;

    for(auto& s: user_choice){
        s = tolower(s);
    }
    if(comp_choice == choices[0]){
        if(user_choice == choices[0])
        {
            cout << "DRAW!!" << endl;
        }
        else if(user_choice == choices[1]) cout << "You Win!!" << endl;
        else if(user_choice == choices[2]) cout << "You Lose!!" << endl;
        else cout << "Invalid Input" << endl;
    }
    else if(comp_choice == choices[1])
    {
        if(user_choice == choices[1])
        {
            cout << "DRAW!!" << endl;
        }
        else if(user_choice == choices[2]) cout << "You Win!!" << endl;
        else if(user_choice == choices[0]) cout << "You Lose!!" << endl;
        else cout << "Invalid Input" << endl;
    }
    else if(comp_choice == choices[2])
    {
        if(user_choice == choices[2])
        {
            cout << "DRAW!!" << endl;
        }
        else if(user_choice == choices[0]) cout << "You Win!!" << endl;
        else if(user_choice == choices[1]) cout << "You Lose!!" << endl;
        else cout << "Invalid Input" << endl;
    }
    return 0;
}
