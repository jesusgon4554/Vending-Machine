/*  Program: C++
    Author: Jesus Gonzalez
    Class: CSCI 140
    Date: 3/9/21
    Description: Simple Vending Machine V.1

    I certify that the code below is my own work.

    Exception(s): N/A

*/

#include <iostream>
using namespace std;

int main(){
    int purchaseAmount;
    int quartersAvail, dimesAvail, nickelsAvail, changeAvail;
    int quarter, nickel, dime, dollar;
    int changeBack;

    //currency
    dollar = 100;
    quarter = 25;
    nickel = 5;
    dime = 10;

    //change available
    quartersAvail = 2;
    dimesAvail = 2;
    nickelsAvail = 1;
    changeAvail = 75;

    //change Back
    int quartersBack;
    int dimesBack;
    int nickelsBack;

    cout << "Enter a purchase amount" << endl;
    cin >> purchaseAmount;

    changeBack = dollar - purchaseAmount;
    
    if(changeBack >= 25  && changeBack <= changeAvail){
        quartersBack = changeBack / 25;
        changeBack = changeBack - (quarter * quartersBack);
    }
    if(changeBack >= 10 && changeBack <= changeAvail){
        dimesBack = changeBack/10;
        changeBack = changeBack - (dime * dimesBack);
    }
    
    if(changeBack >= 5 && changeBack <= changeAvail){
        nickelsBack = changeBack / 5;
        changeBack = changeBack - (nickel * nickelsBack);
    }
   
    if(changeBack < 5 && changeBack> 3 && changeBack < changeAvail && purchaseAmount < 100){
        nickelsBack = nickelsBack + 1;
    }

    if(purchaseAmount < 0 || purchaseAmount > 100){
        cout << "Error: Your input is not in range." << endl;
    } else {
        cout << "You Entered: ¢." << purchaseAmount << endl;
    }

        
    
    if(changeBack >= changeAvail + 1 ){
        cout << "Your Change of ¢." << changeBack << " cannot be processed." << endl;
    } else{
        cout << quartersBack << " Quarter(s)" << endl;
        cout << dimesBack << " Dime(s)" << endl;
        cout << nickelsBack << " Nickel(s)" << endl;
    }

    return 0;
}