#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reserveS(string str);


string reverseS(string str) {
    std::vector<char> rv_str = {};
    for (int i = (str.length() - 1); i >= 0; i--)
        rv_str.push_back(str[i]);
    
    std::string r_str(rv_str.begin(), rv_str.end());
    return r_str;
} 

int main(){
    cout << endl << reverseS("DOG");
}