#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct word_record_t {
    string word;
    vector<string>::size_type count;
    }   ;

void displayWordCount(string wcount) {
    vector<word_record_t>worddata;

    cout<<"  "<<wcount;

}

int main()
{
    vector<string> words;
    string token ;
    cout<<" Please Enter some Text. Press <CTRL><D> to signal EoF :- "<<endl;

    while(cin>>token)
    {
        words.push_back(token);
    }
    cout<<endl;
    cout<<"Here is the word count for each word you entered :- "<<endl;

    for(vector<string>::iterator it=words.begin() ;it != words.end() ; ++it)
    {

        displayWordCount(token);
    }









}
