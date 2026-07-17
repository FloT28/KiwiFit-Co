#include "user.h"
#include "tools.h"
#include "workout.h"
#include "auth.h"
#include <iostream>
#include <fstream>

using namespace std;


void User_Menu(){

    cout <<"🌿 👤 User Menu 🌿 "<<endl;
    
    cout <<"1. 📋View Profile"<<endl;
    cout <<"2. ✏️ Update Profile"<<endl;
    cout << "3. Workout Menu";
    cout <<"4. Return to Main Menu";
    cout <<"0. 🚪 Exit "<<endl;

    cout <<"Enter choice (1-3): " << endl;

    int user_input; 
    cin >> user_input;

    if (user_input == 1){
       cout << "View Profile" << endl;
       View_Profile();
    } else if (user_input == 2){
        cout << "History"<<endl;
    }
    else if(user_input == 3){
        workoutMenu();
    } else {
        cout <<"Invalid option" << endl;
        cout<<"🔁 Returning to Main Menu... "<<endl;
    }
    
    pauseScreen();
    clearScreen();

}


void View_Profile(){
        cout << "View User Profile: "<< endl;

        string path = "Users/" + currentUser + ".txt";
        cout << "Attempting to open: ["<< path <<"]" << endl;
        
        ifstream log(path);
        if (!log.is_open()){
            cout <<"No User History, found under this name\n";
            return;
        }
    
        //Show User History - currentUser account
        string line; 
        cout <<"\n ***** User History for: " << currentUser << "****\n";
        while(getline(log, line)){
            cout << line << endl;//to fix: only show name and age Not Password!
        }
        
        log.close();

    };

void UpdateProfile();

