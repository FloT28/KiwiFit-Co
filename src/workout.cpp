#include "workout.h"
#include "tools.h"
#include "auth.h"
#include "main.h"

#include <fstream>

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
       log_workout();
    } else if (user_input == 2){
        cout << "History"<<endl;
        View_Workout();
    } else if (user_input == 3){
        cout<<"Delete Workout"<<endl;
    }
    else {
        cout <<"Invalid option" << endl;
        cout<<"🔁 Returning to Main Menu... "<<endl;
    }

    system("pause");
    system("cls");    // clear screen
}


//Workout log function
void log_workout(){
    
    //Variables to store user data 
    string exercise_type;
    int sets, reps; 
    double weight; 

    cin.ignore(); // clears newline after previous cin >> 

    //Collecting User input for Exercises types
    cout <<"Exercise Name: ";
    getline(cin, exercise_type);

    cout <<"Enter sets: ";
    cin >> sets;
    cout <<"Enter reps: ";
    cin >> reps;
    cout <<"Enter weight: ";
    cin >> weight;

    //Search within User folder and store workout history into text file
    ofstream log("Users/" + currentUser + "workouts.txt");
    log << exercise_type <<" | Sets: " << sets << "| Reps: " << reps << " | Weight: " << weight
     << endl;
     //Format to store text inside workouts.txt file
    log.close();

};

void View_Workout(){
    cout<<"Workout Logs Loading...📝"<<endl;

    //View Workout - No History of workout for currentUser
    ifstream log("Users/" + currentUser + "workouts.txt");
    if (!log.is_open()){
        cout <<"No Workout History found with those details!.\n";
        return;
    }
    
    //Show Workout History - currentUser account
    string line; 
    cout <<"\n ***** Workout History for:  ***" << currentUser << "****\n";
    while(getline(log, line)){
        cout << line << endl;
    }
    log.close();
};

void Delete_Workout(){
    cout <<"Delete Workout: " << endl; 
    
    string filepath = "Users/" + currentUser + "workouts.txt";

    ifstream log(filepath);
    if (!log.is_open()){
        cout <<"No Workout History found!\n";
        return;
    }

    vector<string> lines;
    string line; 
    while(getline(log, line)){

    }
    log.close();

    //To-Do: Check lineNumberToDelete is inside range 
    //To-Do: erase the line from 'lines' (hint: lines.erase())
    //To-Do: write 'lines' back to filepath, overwrite old file 
    //To-Do: give user feedback (success / fail message)
    
};


//To-Do: add workout logic
