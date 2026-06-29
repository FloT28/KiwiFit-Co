#include "auth.h"
#include "tools.h"
#include "user.h"

#include <iostream>
#include <fstream>


using namespace std; 


bool SigningIn(){

        string name,password;
        int age;

        while (true){
             cout <<"Enter first name: "<< endl;
        cin >> name; 

        cout << "Enter password: " << endl; 
        cin >> password; 

        ifstream read(name + ".txt"); 
        getline(read, name);
        getline(read, password);

            if (name == name && password == password){
                View_Profile();
                cout <<"\n";
                return true;
            }
            else 
            {
                RegisterMenu();
                break;
                return false;
            }
        }
       return false;
}

void RegisterMenu(){
    
        int user_choice;
        string name,password;
        int age;

        while(true){
 cout <<"1. Sign-up (as new User)"<<endl;
        cout <<"2. Sign-in (existing user)"<<endl;
        cout <<"3. Main Menu"<<endl;

        cin >> user_choice;

        if (user_choice == 1){
            cout <<"Enter first name: ";
            cin >> name;
            cout <<"Enter your age: ";
            cin >> age;
            cout <<"Enter your password: ";
            cin >> password; 

            //Store new users into file
            ofstream file;
            file.open(name + ".txt");
            file << "Name: "<< name << endl <<"Age: " << age << endl <<"Password: " << password;//encrypted password
            file.close();

        } else if (user_choice == 2){
            bool status = SigningIn();
            if (!status)
            {
                cout <<"Incorrect Credentials!, Try Again!" << endl;
                pauseScreen();
            } 
            else {
                cout <<"Login Successful!" << endl;
                User_Menu();
                pauseScreen();
            }
        } else {
            cout <<"Returning to Main Menu...";
        }
        }
       
    }