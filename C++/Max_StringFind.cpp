#include<iostream>
#include<string>
#include<iterator>
#include<list>

using namespace std;

list<string> student_list;
list<string>::size_type maxlen =0;
list<string>::size_type current =0;

int main()
{
    string name,max_string;
    cout<<"Please Enter Students name"<<endl;
    while(cin>>name)
    {
        student_list.push_back(name);
    }

    for(list<string>::iterator iter= student_list.begin();  iter !=student_list.end();  ++iter)
    {
      current = (*iter).size();

        while(current>maxlen)
        {
            maxlen = current;
            max_string=*iter;

        }

    }
    cout<<endl;
    cout<<"Longest Name in List is :- " <<max_string<<endl;;

    return 0;

}
