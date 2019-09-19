// This program is to demonstrate a use of basic input/output in C++
//First this code ask for persons name
// And then pop-up greeting message along with * border




#include <iostream>
#include <string>

int main()
{
    std::cout<<" Please enter your name "<<std::endl;
    std::string name;                                    //declare string variable name
    std::cin>>name;                                           //input name

    const std::string message=" Howdy " + name + " !!! ";
    const std::string border(message.size(), '*');


    // printing to display

    std::cout<<std::endl;
    std::cout<<" *" + border + "* "<<std::endl;
    std::cout<<" *" + border + "* "<<std::endl;
    std::cout<<" *" + message + "* "<<std::endl;
    std::cout<<" *" + border + "* "<<std::endl;
    std::cout<<" *" + border + "* "<<std::endl;



    return 0;
}
