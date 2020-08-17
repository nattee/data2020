#include <iostream>

int main() {
    //initialize by { }
    std::pair<std::string,bool> p1 = { "somchai", true };

    //create pair without specifying type by "make_pair"
    std::pair<bool,int> p2;
    p2 = std::make_pair(false,10);


    //more complex pair
    std::pair< std::pair<float, int>, std::string >  p3 = { {20.5, -3}, "abc"};
    std::cout << p3.first.first << " " << p3.first.second << " " << p3.second << std::endl;
}