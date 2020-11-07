#include <bits/stdc++.h>
#include <thread>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>

using namespace std;

bool curtimedisplay()
{
    cout << endl;
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf,sizeof(buf),"%m-%d %X",&tstruct);
    cout<<"   " << (string)buf<<" ";
    return true;
}

int main()
{
    cout << "start\n";
    while(curtimedisplay()) 
    {
        sleep(1);
        if(system("CLS")) system("clear");
    }
    return 0;
}
