#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class TimeMap {
private:
    unordered_map<string, vector<pair<string, int>> > data;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        data[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        string result;
            //key -> Alice
            // cout << data[key][0].first << endl; //data[key] is a vector, vector[index] gives a pair. Pair.First->Value, Pair.Second is Time
            int l=0;
            int r = data[key].size() - 1;
            result = "";
            while(l<=r){
                int mid = (l+r)/2;
                if (data[key][mid].second <= timestamp){
                    result = data[key][mid].first;
                    l = mid + 1;
                }else{
                    r = mid - 1;
                }
            }
        return result;
    }


};


int main(){
    TimeMap timemap;
    timemap.set("Key1", "Value1", 10);
     cout << timemap.get("Key1", 1) << endl;
     cout << timemap.get("Key1", 10) << endl;
     cout << timemap.get("Key1", 11) << endl;
    // timemap.print();
    return 0;
}