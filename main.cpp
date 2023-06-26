//trvael management sysytem
#include<iostream>
#include<fstream>//this is to handle our files
#include<iomanip>//use to show floating point values
#include<windows.h>

using namespace std;
//creating various classes according to the need

//customers class
class Customers{

    public:
    //creating various attributes
    string name, gender,address;
    int age, mobileNumber,customerid;
    char all[999];//char array to get all content from the file

    void setDetails(){

        //getting details into file and saving it
        ofstream out ("old-customers.txt",ios::app);
        {
        cout<<"Enter Customer ID : ";
        cin>>customerid;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Age : ";
        cin>>age;
        cout<<"Enter Mobile NUmber : ";
        cin>>mobileNumber;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Enter Gender : ";
        cin>>gender;
        }
        out<< "\nCustomer ID : " << customerid <<"\nName : "<<name <<"\nAge"<<age
        <<"\nMobile Number : " << mobileNumber <<"\nAddress : "<<address 
        <<"\nGender : "<<gender<< endl;
        out.close();
        cout<<"\n SAVED \n NOTE : Details are saved for future purpose";

    }

    void showDetails()
    {   ifstream in ("old-customers.txt");
        {   //if error in file output error
            if(!in){
                cout<<"File Error !!!"<<endl;
            }
            //printing the content of header file
            while(!(in.eof())){
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
        }

    }

};

//Cabs class
class Cabs{
public:
    int cabChoice;
    int kilometers;
    float cabCost;
    static float lastCabCost;

    void cabDetails()
    {
        cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
        cout << "-----------ABC Cabs-----------\n" << endl;
        cout << "1. Rent a Standard Cab - Rs.15 for 1KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs.25 per 1KM" << endl;

        cout << "\nEnter another key to back or," << endl;

        cout << "\nTo calculate the cost for your journey.." << endl;
        cout << "Enter which kind of cab you need: ";
        cin >> cabChoice;
        cout << "Enter Kilometers you have to travel: ";
        cin >> kilometers;

        int hireCab;

        if(cabChoice == 1){
            cabCost = kilometers * 15;
            cout << "\nYour tour will cost " << cabCost << " rupees for a standard cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1){
                lastCabCost = cabCost;
                cout << "\nYou have successfully hired standard cab" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if(hireCab == 2){
                cabDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else if(cabChoice == 2){
            cabCost = kilometers * 25;
            cout << "\nYour tour will cost " << cabCost << " rupees for a luxury cab" << endl;
            cout << "Press 1 to hire this cab: or ";
            cout << "Press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");
            if (hireCab == 1){
                lastCabCost = cabCost;
                cout << "\nYou have successfully hired luxury cab" << endl;
                cout << "Goto Menu to take the receipt" << endl;
            }
            else if(hireCab == 2){
                cabDetails();
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                cabDetails();
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }

        cout << "\nPress 1 to Redirect Main Menu: ";
        cin >> hireCab;
        system("CLS");
        if(hireCab == 1){
            menu();
        }
        else{
            menu();
        }
    }

};


//Booking class
class Booking{

};

//Charges class
class Charges{

};



//main function
int main(){

    cout<<"hello world";
    return 0;
}