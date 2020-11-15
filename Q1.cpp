#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    int test_cases, goals_num;
    string team, team_1="", team_2="";
    int count_1=0, count_2=0;
    vector<string> teams;

    ifstream input;
    input.open("volley.in");

    input>> test_cases;

    for(int j=0; j< test_cases; j++)
    {
        vector<string> teams;

        input>> goals_num;

        for(int i=0; i< goals_num; i++)
        {
            input>> team;
            teams.push_back(team);
        }

         team_1= teams[0];

        for(int i=0; i< goals_num; i++)
        {
            if(teams[i]== team_1)
                count_1++;
            else
            {
                team_2= teams[i];
                count_2++;
            }
        }

        if(count_1> count_2)
            cout<< team_1 << endl;
        else
        cout<< team_2 << endl;

        count_1=0;
        count_2=0;
        team_1="";
        team_2="";

    }

    return 0;
}
