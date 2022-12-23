#include <iostream>

bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        if(str.length() <= 1){
            return true;
        }

        int add = 1;
        if(str.length() %2 == 0) add = 0;
        for(int i = 0; i<str.length()/2+add;i++){
            if(str[i] != str[str.length()-i-1]){
                return false;
            }
        }
        return true;

    }

int main(){
    // isPalindrome(101);
    std::cout << "result: " << isPalindrome(1001) << "\n";
    return 0;
}