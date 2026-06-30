#include "workout.h"
#include "tools.h"

#include <iostream>

using namespace std;

void workoutMenu(){
    cout <<"🌿 🏋️ LOG WORKOUT  🌿 "<<endl;

    cout << "1. Log Workout"<<endl;
    cout <<"2. View History"<<endl;
    cout <<"3. Delete Workout"<<endl;

    cout <<"Enter choice (1-3): " << endl;

    int user_input; 
    cin >> user_input;

    if (user_input == 1){
       cout << "Log Workout" << endl;
    } else if (user_input == 2){
        cout << "History"<<endl;
    } else if (user_input == 3){
        cout<<"Delete Workout"<<endl;
    }else {
        cout <<"Invalid option" << endl;
        cout<<"🔁 Returning to Main Menu... "<<endl;
    }

    system("pause");
    system("cls");    // clear screen
}

void Add_Workout(){
    int dd,mth,yr,weight,reps,sets;
    string exersize_type;

    pauseScreen();
    clearScreen();
    cout <<"Welcome to Kiwifit Co!"<<endl;
    cout <<"\n Details: Add the following details for an updated workout log..."<<endl;

    cout <<"Date: "<<endl;

    cout<<"Exercise Type: "<<endl;
    cin >> exersize_type;

    cout <<"Sets: "<<endl;
    cin >> sets;

    cout <<"Reps: "<<endl;
    cin>>reps;

    cout<<"Weight"<<endl;
    cin >> weight;
};

void View_Workout();
void Delete_Workout();


//To-Do: add workout logic
