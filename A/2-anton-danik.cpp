#include <iostream>
#include <vector>
using namespace std;
int g,antonCount,danikCount;
string s,winner;       
int main()
{
    cin >> g >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='A') antonCount++;
        else if (s[i]=='D') danikCount++;
        if(antonCount>s.length()/2) winner = "Anton";
        else if(danikCount>s.length()/2) winner = "Danik";
        else winner="Friendship";
    }
    cout<<winner;
}