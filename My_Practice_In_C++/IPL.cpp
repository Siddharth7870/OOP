#include<iostream>
using namespace std;

class IPL
{
    private:
        string teamName;
        string captain;
        int championshipsWon;

    public:
        // Constructor
        IPL(string name, string cap, int wins)
        {
            teamName = name;
            captain = cap;
            championshipsWon = wins;
        }

        // Setter methods
        void setTeamName(string name)
        {
            teamName = name;
        }

        void setCaptain(string cap)
        {
            captain = cap;
        }

        void setChampionshipsWon(int wins)
        {
            championshipsWon = wins;
        }

        // Getter methods
        string getTeamName()
        {
            return teamName;
        }

        string getCaptain()
        {
            return captain;
        }

        int getChampionshipsWon()
        {
            return championshipsWon;
        }

        // Display team details
        void displayTeamDetails()
        {
            cout << "Team Name: " << teamName << endl;
            cout << "Captain: " << captain << endl;
            cout << "Championships Won: " << championshipsWon << endl;
        }
};

int main()
{

}