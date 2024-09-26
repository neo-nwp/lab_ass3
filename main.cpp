#include <iostream>

using namespace std;

extern int quarters;
extern int dimes;
extern int nickels;
extern int pennies;

int main()
{
    int purchaseAmount = 0;
    cout<<"Enter the Purchase Amount: ";
    cin>>purchaseAmount;

    int change= 100- purchaseAmount;
    quarters = change / 25;
    change%=25;

    dimes = change/10;
    change%=10;

    nickels = change/5;
    change%=5;
    pennies= change;

    cout<< "Change from the amount : "<<endl;
    cout<<"Quarters : "<<quarters<<endl;
    cout<<"Dimes : "<<dimes<<endl;
    cout<<"Nickels : "<<nickels<<endl;
    cout<<"Pennies : "<<pennies<<endl;

    return 0;
}
