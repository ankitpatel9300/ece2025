#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    string s;
    map<string ,int> counters ;
    cout<<" Please Enter some text   <CTRL><D> to EoF" <<endl;
    while(cin>>s)
    {
        ++counters[s];
    }
    cout<<endl;

    for(map<string, int>::const_iterator it= counters.begin(); it !=counters.end(); ++it)
    {
        cout<<it->first<< "\t" <<it->second <<endl;
    }


    return 0;
}
