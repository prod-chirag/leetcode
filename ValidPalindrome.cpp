#include <iostream>
#include <vector>


using namespace std;

bool alphaNumeric(char str){
    return ((str>='A' && str<= 'Z')|| (str>='a' && str<= 'z') || (str>='0' && str<= '9') );
}

bool validPalindrome(string str){
    //"Was it a car or a cat I saw?"
    int l = 0;
    int r = str.size() - 1;


    while (l<r){
        //l -> 0
        //r -> 25
        while(l<r && !(alphaNumeric(str[l]))){
            l++;
        }  
        while(r>l && !(alphaNumeric(str[r]))){
            --r;
        }
        if (tolower(str[l])  != tolower(str[r])){
            return false;
        }
    l++;
    --r;
    }

    return true;
}


int main(){
    string str = "0P";
    bool result = validPalindrome(str);
    cout << result << endl;
    return 0;
}