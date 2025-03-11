/*
--> Planning for the Smart Home System :
--> 1. Control Lights & Fan : Toggle ON/OFF
--> 2. Room Temperature Management : Set desired temperatura.
--> 3. Automatic Plant watering System : Schedule watering times.
--> 4. Face/finger recognition Door Unlock : Simulate door unlocking based on recognized faces
--> 5. Home Robot Control : Manually
--> 6. Family Face Recognition Alert : Notify when a recognized family member arrives. 
--> 7. Future Planning : Suggestions for adding AI, integration, and energy management. 

----------------------> Code Implementation <----------------
*/

#include<iostream>
#include<string>
#include<vector>
#include<chrono>
#include<thread>
using namespace std;

// Smart Home System class with functionalities.
class SmartHomeSystem
{   
private:
    bool lightStatus;
    bool fanStatus;
    float roomTemperature;
    bool doorLocked;
    bool plantWatering;
    vector <string> familyMembers = {"Ramanand", "Gaurav", "Santosh" };
    string recognizedFace;
    string robotTask;
    int workTimerMinutes;

public:
    // Constructor for default values
    SmartHomeSystem()
    {
        lightStatus     = false;
        fanStatus       = false;
        roomTemperature = 25.0;
        doorLocked      = true;
        plantWatering   = false;
        recognizedFace  = "Ramanand";
        robotTask       = "Music play";
        workTimerMinutes = 45;

    }

// Method to display the main menu 
void displayMenu()
{
    cout <<" \n Smart Home System Menu : " << endl;
    cout << "1. Control lights!" << endl;
    cout << "2. Control Fan! " << endl;
    cout << "3. Set Room Temperature!"<<endl;
    cout << "4. Automatic Plant Watering!" << endl;
    cout << "5. Face Recognition For Door unlock!" << endl;
    cout << "6. Control Home Robot!" << endl;
    cout << "7. Work Time table!" << endl;
    cout << "Choice a option : " ;
}
 
// Method to control lights 
void controlLights()
{
    cout << "\nControl Light Status!" << endl;
    int option;
    cout << " 1(ON), and 0(OFf) Choice option : " ;
    cin >> option;

    if( option == 1)
    {
        cout << " Light turned : ON " << endl;
    }

    else
    {
        cout << "Light turned : OFF " << endl;
    }
    
}

// Method to control Fan 
void controlFan()
{ 
    cout << "\nControl fan Status!" << endl;

    int option;
    cout << "ON : 1  and 0 : OFF , choice a option : ";
    cin >> option;


    if ( option == 1 )
    {
        cout << "Switch ON the fan!";
    }
    else
    {
        cout << "Switch OFF the fan! \n";
    }
}

// Method to Control Room temperature
void controlTemperature()
{
  cout << "\nControl Room Temperature!"<<endl;
  int temperature;
  cout <<"Set Room Temperature : ";
  cin >> temperature;
  cout << "Set your room temperature : " << temperature <<endl;
}


// Method to control plant watering
void controlPlantWatering()
{
    cout << "\nScheduling time for plant watering ever day!"<< endl;
    cout << "Moring plant Watering time -> 06 : 00 AM " << endl;
    cout << "After noon plant Watering time -> 12 : 00 PM " << endl;
    cout << "Evening plant Watering time -> 06 : 00 PM \n" <<endl;
}

// Method to control door 
void controlDoor()
{
    string name;
    cout << "Control for Door Status!" << endl;
    cout << "Name of family member for use passward " << endl;
    cout << "Enter the password : ";
    cin >> name;
    
    if ( name == "Ramanand" || name == "Gaurav" || name == "Santosh")
   
    {
        cout << "Succussuful unlock!" << endl;
    }

    else
    {
        cout <<"You are not my family member!" << endl;
    }

}

// Method to contro Robot
void controlRobot()
{
    cout << "Play Music, Play Video, Give me Water, Eat, Clean, Tea" <<endl;
    string work;
    cout << "How can you help me?" ;
    cin >> work;

    if ( work == "M" || work == "m")
    {
        cout << "Music Play" <<endl;
    }

    else if ( work == "V" || work == "v")
    {
        cout << "Play Video" << endl;
    }

    else if ( work == "W" || "w")
    {
        cout << "Here is water." <<endl;
    }

    else if ( work == "E" || "e")
    {
        cout << "Just a twenty minutus" << endl;
    }

    else if ( work == "C" || "c")
    {
        cout << "Ok" << endl;
    }

    else if (work == "T" || "t")
    {
        cout << "Ok just a five minutus" << endl;
    }

    else{
        cout << "This is not my work." << endl;
    }
}

// Method to Set your timer with routine
void YourRoutine()
{
    cout << "\nHere is your time table for daily routine!" << endl;
    cout << "Morning   04 : 30 AM  To  05 : 00 AM  Medition" << endl;
    cout << "Morning   05 : 00 AM  To  06 : 00 AM  Exercise" << endl;
    cout << "Morning   06 : 00 AM  To  07 : 30 AM  Recalling reading" << endl;
    cout << "Morning   08 : 00 AM  To  09 : 00 AM  BreakFast " << endl;
    cout << "Morning   09 : 00 AM  To  11 : 00 AM  Python Language "  << endl;
    cout << "Morning   11 : 00 AM  To  12 : 00 PM  Lanch time" <<endl;
    cout << "Afternoon 12 : 00 PM  To  02 : 00 PM  C++ Language " << endl;
    cout << "Afternoon 02 : 00 PM  To  04 : 00 PM  Mathematic" << endl;
    cout << "Afternoon 04 : 00 PM  To  06 : 00 PM  Automation Tool" << endl;
    cout << "Afternoon 06 : 00 PM  To  07 : 00 PM  UnderStanding Bharat" << endl;
    cout << "Night     07 : 00 PM  To  08 : 00 PM  Dinner " << endl;
    cout << "Night     08 : 00 PM  To  10 : 00 PM  Day one Recall" << endl;
}

};

int main()
{
    SmartHomeSystem system;
    int choice;
    

    while ( true )
    {
        system.displayMenu();
        cin >> choice;

        switch ( choice )
        {
            case 1 : system.controlLights();
            break;

            case 2 : system.controlFan();
            break;

            case 3 : system.controlTemperature();
            break;

            case 4 : system.controlPlantWatering();
            break;

            case 5 : system.controlDoor();
            break;

            case 6 : system.controlRobot();
            break;

            case 7 : system.YourRoutine();
            break;

            default : cout << "Invalid choice! Please try again:" << endl;
        
        
        }
    }

    return 0;
}