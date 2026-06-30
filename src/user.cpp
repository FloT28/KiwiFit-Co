#include "user.h"
#include "tools.h"
#include <iostream>

using namespace std;


void User_Menu(){

    cout <<"🌿 👤 User Menu 🌿 "<<endl;
    
    cout <<"1. 📋View Profile"<<endl;
    cout <<"2. ✏️ Update Profile"<<endl;
    cout <<"3. Return to Main Menu";
    cout <<"0. 🚪 Exit "<<endl;

    cout <<"Enter choice (1-3): " << endl;

    int user_input; 
    cin >> user_input;

    if (user_input == 1){
       cout << "View Profile" << endl;
    } else if (user_input == 2){
        cout << "History"<<endl;
    } else {
        cout <<"Invalid option" << endl;
        cout<<"🔁 Returning to Main Menu... "<<endl;
    }
    
    pauseScreen();
    clearScreen();

}

void Signin();

void View_Profile(){
    cout<<"Welcome back"<<endl;
    //Collect user information 

    //Display via new window 

}

void UpdateProfile();

