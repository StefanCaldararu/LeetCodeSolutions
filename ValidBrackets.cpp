#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack <char> l;
    for (char i:s){
        if(i == '(' || i == '{' || i=='['){
            l.push(i);
        }
        else if ((i == ')' && l.top() == '(') ||(i == '}' && l.top() == '{')||(i == ']' && l.top() == '[')){
            l.pop();
        }
        else{
            return false;
        }
    }
    if(l.empty())
        return true;
    else 
        return false;
    }

int main(){
    string s = "()";
    cout << isValid(s)<<'\n';
    return 0;
}