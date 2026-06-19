//KiwiFit Co - Gym Session Logger  
//Author: [Florence Taele]
//Date: 19/06/26 
//Status: In progress


#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include "user.h"
#include "workout.h"

using namespace std;


int main() { 
    SetConsoleOutputCP(CP_UTF8); //enable emjois/unicode
    
    //Welcome Screen
    cout <<"🌴 ~ 🌱 🌴 ~ 🌱 🌴 ~ 🌱 🌴 ~ 🌱🌴 ~ 🌱 " << endl;
    cout <<" 🌿 🌿         KIWIFIT-CO          🥝 🥝 "<<endl;
    cout <<"🌴 ~ 🌱 🌴 ~ 🌱 🌴 ~ 🌱 🌴 ~ 🌱🌴 ~ 🌱 " << endl;

        system("pause");
    system("cls");    // clear screen
    
        //Main Menu Page
    cout <<"Main Menu:"<<endl;

    cout<<"1. 👤 My Profile"<<endl;
    cout <<"2.💪 Log Workout"<<endl;
    cout <<"3.📋 View Workout History" << endl;
    cout <<"4.🔥 Personal Bests"<<endl;
    cout <<"5.🔍 Search & Filter" << endl;
    cout <<"6.🗑️ Delete Session"<< endl;
    cout <<"7.🚪 Exit" << endl;


    cout << "Welcome Screen!" << endl; 
    cout <<"In need of tracking your workouts?"<<endl;   
    cout <<"NZ-Made"<<endl;
    cout<<"est 2026"<<endl;
    cout<<"Location: Auckland"<<endl;

    system("pause");
    system("cls");    // clear screen



    //TODO: Add sessing logging 
    //TODO: Add view past sessions    
    system("pause");
    return 0;
}