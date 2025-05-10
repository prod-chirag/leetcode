#include <iostream>
#include <vector>
using namespace std;

string Encode(vector<string> strs){
    //{"Hello", "World", "My Name is", "Chirag"}
    string result = "";
    for (string str:strs){
        //Hello
        result = result + to_string(str.size()) + '#' + str;
    }
    return result;
    //Output will be something like: 5#Hello5#World10#My Name is6#Chirag
}

vector<string> Decode(string str){
    //5#Hello5#World10#My Name is6#Chirag
     vector<string> res;
        int i = 0;
        while (i < str.size()) {
            int j = i;
            while (str[j] != '#') {
                j++;
            }
            int length = stoi(str.substr(i, j - i));
            i = j + 1;
            j = i + length;
            res.push_back(str.substr(i, length));
            i = j;
        }
        return res;
}


int main (){

    vector<string> str = {"Hello", "Hello", "My Name is", "Chirag"};

    string encoded = Encode (str);
    cout << "ENCODED TEXT: " << encoded << endl;

    vector<string> decoded = Decode(encoded);

    for  (string str:decoded){
        cout << "DECODED STRING: " << str << endl;
    }
    return 0;
}