#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs.front();
    for (auto i:strs){
        int j = 0;
        while(prefix[j] == i[j]){
            j++;
        }
        if(j == 0){
            prefix = "";
        }
        prefix = prefix.substr(0,j);
    }

    return prefix;
}

int main(){
    vector<string> data;
    data.push_back("flower");
    data.push_back("flow");
    data.push_back("flight");

    cout << longestCommonPrefix(data) <<"\n";
    }