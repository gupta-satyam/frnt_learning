#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void login();
void registration();
void forgot();

int main(){
    //c for choice preference
    int c;
    cout<<"\t\t\t\t__________________________________\n\n\n"<<endl;
    cout<<"\t\t\t\t     WELCOME TO THE LOGIN PAGE     \n\n\n";
    cout<<"\t\t\t\t________________MENU________________\n\n\n";
    cout<<"                                                 "<<endl;
    cout<<"\t| press 1 to login                            |"<<endl;
    cout<<"\t| press 2 to register                         |"<<endl;
    cout<<"\t| press 3 if you forgot your PASSWORD         |"<<endl;
    cout<<"\t| press 4 to exit                             |"<<endl;
    cout<<"\n\t please enter your choice :                 ";
    cin>>c;
    cout<<endl;
    switch(c){
        case 1:
        login();
        break;
        case 2:
        registration();
        break;
        case 3:
        forgot();
        break;
        case 4:
        cout<<"\t\t\t Thank You!\n\n";
        break;
        default:
        system("cls");
        cout<<"\t\t\t Please select from the option given above\n\n"<<endl;
        main();
    }
    
}
void login(){
    int count;
    string userid,password,id,pass;
    system("cls");
    cout<<"\t\t\t\t Please enter the user name and password: "<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>userid;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;
    //check password,username is present in our record
    //for that we will use the file handling operation of ifstream class bcz its used to read the data
    
    ifstream input("records.txt");
    while(input>>id>>pass){
        if(id==userid && pass==password){
            count=1;
            system("cls");
        }
    }
        //to close the file
        input.close();
        if(count==1){
            cout<<userid<<"\n your login is successful \n thanks for logging in !\n";
        }
        else{
            cout<<"\n login error \n please check your username and password\n";
            main();
        }
}
void registration(){
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t \t \t enter the username : ";
    cin>>ruserid;
    cout<<"\t\t\t enter the password: ";
    cin>>rpassword;
    // here we are using ofstream class because it is used write down inside the file 
    //object name:f1
    //ios means input output string and app will open the file and append the editing
    ofstream f1("records.txt", ios::app);
    f1<<ruserid<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\n\n\n registration is successful ! \n";
    main();
}
void forgot(){
    int option;
    system("cls");
    cout<<"\t\t\t you forgot the password ? no worry \n";
    cout<<" press 1 to search your id by username "<<endl;
    cout<<"press 2 to go back to the main menu "<<endl;
    cout<<" \t\t\t enter your choice :";
    cin>>option;
    switch(option){
        case 1:{
            int count=0;
            string suserid,sid,spass;
            cout<<"\n\t\t\t Enter the username that you have remembered :";
            cin>>suserid;
            ifstream f2("records.txt");
            while(f2>>sid>>spass){
                if(sid==suserid){
                    count=1;
                }
            }
            f2.close();
            if(count==1){
            cout<<"\n\n Your account is find! \n";
            cout<<" \n\n Your password is : "<<spass;
            main();
            }
            else {
                cout<<"\n\t Sorry! your account is not found! \n";
            }
        }
        case 2:
        {
            main();
            default:
                cout<<"\t\t\t Wrong choice p;ease try again "<<endl;
                forgot();
        }
    }
}