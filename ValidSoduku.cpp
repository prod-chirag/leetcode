#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

bool isValidSoduku (vector<vector<char>>& board){
    unordered_set <char> row;
    unordered_set <char> column;
        struct pair_hash {
        size_t operator()(const pair<int, int>& p) const {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };
    unordered_map<pair<int, int>, unordered_set<char>, pair_hash> boxes;


    for (int i=0; i<board.size(); i++){//i=0
        
        //{'1', '2', '.', '.', '3', '.', '.', '.', '.'}
        for (int j=0; j<9; j++){ //j=0
            //board[i][j] -> 1
            //For row: 0(i)/3 -> 0
            //For column: 0(j)/3-> 0
            //Map: boxes[{i/3, j/3}] = board [i][j];
            //boxes check
            if(board[i][j]!= '.'){
                if( boxes[{i/3, j/3}].count(board[i][j]) ){
                cout << "FAILED AT 3X3 BOXES "<< "Board: i " <<i << " j:" << j << endl;
                return false;
                }else{
                boxes[{i/3, j/3}].insert(board[i][j]);
            }
            }


            // cout << "Checking at i: " << i << " j: " << j << " Value(i,j): " << board[i][j] << " Value(j,i): " << board[j][i] << endl;
            if((row.count(board[i][j]) && board[i][j] != '.') || (column.count(board[j][i]) && board[j][i] != '.')){
                cout << "Checking at i: " << i << " j: " << j << " Value(i,j): " << board[i][j] << " Value(j,i): " << board[j][i] << "FAILED" <<endl;; 
                return false;
            }else{
                row.insert(board[i][j]);
                column.insert(board[j][i]);
            }
        }
        row.clear();
        column.clear();
    }
    return true;
}


int main(){
    vector<vector<char>> board = {
    {'1', '2', '.', '.', '3', '.', '.', '.', '.'},
    {'4', '.', '.', '5', '.', '.', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '.', '3'},
    {'5', '.', '.', '.', '6', '.', '.', '.', '4'},
    {'.', '.', '.', '8', '.', '3', '.', '.', '5'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '.', '.', '.', '.', '.', '2', '.', '.'},
    {'6', '.', '.', '4', '1', '9', '.', '.', '8'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
};
    bool result = isValidSoduku(board);
    cout<<"Result: " << result << endl;
    return 0;
}