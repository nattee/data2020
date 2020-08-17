#include <iostream>

int main() {
    //default constructor
    std::pair<std::string,bool> p;
    std::cout << "default [" << p.first << "] [" << p.second << "]" << std::endl;

    //initialize by { }
    std::pair<std::string,bool> p1 = { "somchai", true };

    //create pair without specifying type by "make_pair"
    std::pair<bool,int> p2;
    p2 = std::make_pair(false,10);

    std::pair<bool,int> p3(p2);


    //more complex pair
    std::pair< std::pair<float, int>, std::string >  p4 = { {20.5, -3}, "abc"};
    std::cout << p4.first.first << " " << p4.first.second << " " << p4.second << std::endl;
}