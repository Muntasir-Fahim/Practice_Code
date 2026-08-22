#include <iostream>
#include<thread>
#include<chrono>

using namespace std;


int main() 
{
    int second = 0,minute = 0,hour = 0;

    while (1)
    {
        cout<<hour<<" : "<<minute<<" : "<<second;

        this_thread::sleep_for(chrono::seconds(1));

        second++;
        if (second == 60)
        {
            minute++;
            second = 0;
        }
        if(minute == 60){
            hour++;
            minute = 0;
        }
        if(hour == 12){
            hour = 0;
            minute = 0;
            second = 0;
        }
        
        
    }
    
}
