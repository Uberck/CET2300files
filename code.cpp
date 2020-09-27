To solve this problem we need to create a CDAccount Class with variables to store the input information and a parameterized Constructor that will set all the variables that are passed in the input.

After that ,we also need to method to calculate the interest earned during maturity and returns it.

I have added necessary comments which will help you understand the solution.

#include<bits/stdc++.h>
using namespace std;

//edge case / error checking needing, if else statements to check inputs

class CDAccount{
    public:
        // Variables
        string account_no;
        double interest_rate;
        double intial_balance;
        int term;

        double interest_at_maturity(){
            return (intial_balance * interest_rate * term )/12;
        }
        // Parameterized Constructor
        CDAccount(string account_no,double intial_balance, double interest_rate,int term){
            this->account_no = account_no;
            this->interest_rate = interest_rate;
            this->intial_balance = intial_balance;
            this->term = term;
        }
        // Default constructor
        CDAccount(){

        }
    
};

int main(){
    // Test Data
    CDAccount CD("01245",1526.50,4.3,9);
    cout<<"The interest at maturity is: $" << CD.interest_at_maturity()<<endl;
}