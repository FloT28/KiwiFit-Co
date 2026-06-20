#include "workout.h"
#include <iostream>

using namespace std;

void workoutMenu(){
    cout <<"🌿 🏋️ LOG WORKOUT  🌿 "<<endl;

    std::cout << "1. Log Workout";
    std::cout <<"2. View History";
    std::cout <<"Enter choice: " << endl;

    int user_input; 
    std::cin >> user_input;

    if (user_input == 1){
        std::cout << "Log Workout" << endl;
    } else if (user_input == 2){
        std::cout << "History"<<endl;
    } else {
        std::cout <<"Invalid option" << endl;
    }

}



//To-Do: add workout logic