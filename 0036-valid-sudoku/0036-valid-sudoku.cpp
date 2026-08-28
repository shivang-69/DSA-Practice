class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

     int m=board.size();
     int n=board[0].size();

     for(int i=0;i<m;i++){
        unordered_map<int,int>mp;
        for(int j=0;j<n;j++){
        if(board[i][j] =='.') continue;
        if(mp.find(board[i][j])!=mp.end()) return false;
        mp[board[i][j]]++;
     }
     }

     for(int j=0;j<n;j++){
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++){
            if(board[i][j] =='.') continue;
            if(mp.find(board[i][j])!=mp.end()) return false;
            mp[board[i][j]]++;
        }
     }

    for(int sr=0;sr<9;sr+=3){
        for(int sc=0;sc<9;sc+=3){

            unordered_map<int,int>mp;

            for(int i=sr;i<sr+3;i++){
                for(int j=sc;j<sc+3;j++){
                     if(board[i][j] =='.') continue;
            if(mp.find(board[i][j])!=mp.end()) return false;
            mp[board[i][j]]++;

                }
            }
        }
    }


    return true;


        
        
    }
};