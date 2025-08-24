#include<iostream>
#include<vector>
#include<stack>
#include<map>
using namespace std;


class Solution {
public:
    // Function to calculate the number of car fleets that will arrive at the target
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // Map to store the position and speed of each car, sorted by position in descending order
        map<int,int,greater<int>> car;

        // Populate the map with car positions and their corresponding speeds
        for(int i=0;i<position.size();i++)
        {
            car[position[i]]=speed[i];
        }
        // Stack to keep track of the time taken for each car to reach the target
        stack<float> timet;
        // Variable to store the current time taken for a car to reach the target
        float curtime=0;
        int count=0;
        // Iterate through each car in the map
        for(const auto & [position,time] : car)
        {
            curtime=(float)(target - position)/time;
            if(timet.empty())
            {
                timet.push(curtime);
                count++;
            }
            else{
                if(curtime<=timet.top())
                {
                    continue;
                }
                else
                {
                    timet.push(curtime);
                    count++;
                }
            }
        }
        // Return the total number of car fleets
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> position={10,8,0,5,3};
    vector<int> speed={2,4,1,1,3};
    int target=12;
    cout<<sol.carFleet(target,position,speed);
    return 0;
}