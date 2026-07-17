#include "auth.h"
#include "tools.h"
#include "user.h"

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>


using namespace std; 

std::string currentUser; 

string getHiddenpassword(){
    char pwd[9];
    int i;

    //Password length of only 8 characters allowed

    cout <<"Enter Password: ";
    for (i=0; i <8; i++){
        //get hidden user input for password 
        // use of getch() method 
        pwd[i] = getch();
        cout <<"*";
    }
    pwd[i] = '\0';
    cout << endl;

    return string(pwd); // convert char array to string to return password
};

bool SigningIn(){
        string storedName, storedPassword, storedAge;

        string name;
        string password;
        int age;

        while (true){
        cout <<"Enter first name: "<< endl;
        cout <<"DEBUG: :currentUser set to ["<<currentUser <<"]" << endl;
        cin >> name; 

        password = getHiddenpassword();
        
        //check if user's name and password is found inside files 
        ifstream read("Users/" + name + ".txt");         
        
        if(!read.is_open()){
            cout <<"Account cannot be found!" << endl;
            RegisterMenu();//Returns to main menu (signup, login)
            return false;//No account found!
        }

        getline(read, storedName);//Check for stored Name and password inside txt file
        getline(read, storedAge);
        getline(read, storedPassword);

        storedName      = storedName.substr(storedName.find(": ") + 2);
        storedAge       = storedAge.substr(storedAge.find(": ") + 2);
        storedPassword  = storedPassword.substr(storedPassword.find(": ") + 2);

            //validate or check enter credentials
            if (name == storedName && password == storedPassword){
                currentUser = name; //Sets global variable for currentUser
                View_Profile();
                cout <<"\n";
                return true;
            }
            else 
            {
                cout <<"Incorrect password.\n";
                return false;
                break;
            }
        }
}

void RegisterMenu(){

        int user_choice; 
        string name, password; 
        int age;

        while(true){

        cout <<"1. Sign-up (New User)"<<endl;
        cout <<"2. Sign-in (existing user)"<<endl;
        cout <<"3. Main Menu"<<endl;

        cin >> user_choice;

        if (user_choice == 1){
            cout <<"Enter first name: ";
            cin >> name;
            cout <<"Enter your age: ";
            cin >> age;
            password = getHiddenpassword();

            //Store new users into file
            ofstream file;
            file.open( "Users/" + name + ".txt");
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
            break;
        }
        }
       
    }

