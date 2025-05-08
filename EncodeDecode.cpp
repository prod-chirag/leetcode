#include <iostream>
#include <vector>

using namespace std;


string Encoder(vector<string>& strs){
    vector<int> sizes;
    string result = "";
    //{"Hey", "World", "I am", "Chirag"};
    for (string s : strs){  
        //Hey
        sizes.push_back(s.size());
        result = result + s;
    }
    string string_sizes;
    for (int i : sizes){
        string_sizes += to_string(i) + ","  ;
    }
    result = string_sizes + "#" + result;
    return result;
}

vector<string> Decoder (string str){
    vector<int> sizes;
    vector<string> result;
    for (char c:str){
        while(c != '#'){
            if (c != ','){
                sizes.push_back(c);
            };
        }
        //H
        for (int i : sizes){
           //H
            //3
            
        }

    }
    return result;
}


int main (){
vector<string> strs =  {"Hey", "World", "I am", "Chirag"};

string encoded = Encoder(strs);

cout<< "Encoded String: "<<endl;

cout << encoded << endl;
cout<< "Decoded String: "<<endl;

vector<string> decoded = Decoder(encoded);

for (string s:decoded){
    cout << s << endl;
};


}