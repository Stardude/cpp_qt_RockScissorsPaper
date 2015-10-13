#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    string your_choice, tmp;
    short m;
    m:cout<<"\nEnter Rock, Scissors or Paper -> "; cin>>your_choice;
    your_choice[0] = tolower(your_choice[0]);
    if (your_choice != "rock" && your_choice != "scissors" && your_choice != "paper")
    {
        cout<<"Please, reenter..."; goto m;
    }
    srand(time(0));
    int pc = 1 + rand()%3;
    if (pc == 1)
    {
        if(your_choice == "paper") cout<<"You win";
        else if(your_choice == "rock") cout<<"Duel";
        else cout<<"Looser";
    }
    else if (pc ==2)
    {
        if(your_choice == "rock") cout<<"You win";
        else if(your_choice == "scissors") cout<<"Duel";
         else cout<<"Looser";
    }
    else if (pc == 3)
    {
        if(your_choice == "scissors") cout<<"You win";
        else if(your_choice == "paper") cout<<"Duel";
         else cout<<"Looser";
    }
    cout<<"\n";
    return 0;
}
