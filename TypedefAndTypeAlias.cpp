#include<iostream>
#include<vector>

typedef std::vector<std::pair<std::string, int>> pairList_t;
typedef std::string text_t;
typedef int inter_t;

int main() {

    // std::vector<std::pair<std::string, int>> ❌
    pairList_t pairlist; 
    // std::string 
    text_t Name = "Hello! It's Jack";
    // int
    inter_t number = 10;

    std::cout << Name << " and I have " << number << " dollar" << std::endl;

    return 0;
}