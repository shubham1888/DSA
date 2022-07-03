#include <map>
#include <functional>
#include <string>
#include <iostream>
using namespace std;
typedef std::map<std::string, std::function<void(void)>> command_dict;
//                                           ^^^^^^^^
//                               the signature of your commands. probably should have an error code.

void help() { std::cout << "v - 1.0.1" << std::endl; }
void command2() { std::cout << "commandb" << std::endl; }
void command3() { std::cout << "commandc" << std::endl; }

int main()
{
    command_dict c;
    c["help"] = &help;
    c["b"] = &command2;
    c["c"] = &command3;

    std::string input;
    while (std::getline(std::cin, input))
    { // quit the program with ctrl-d
        auto it = c.find(input);
        if (it != end(c))
        {
            (it->second)(); // execute the command
        }
        else
        {
            std::cout << "command \"" << input << "\" not known" << std::endl;
        }
    }
}