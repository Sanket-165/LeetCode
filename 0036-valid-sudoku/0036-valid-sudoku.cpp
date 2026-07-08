class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<char,bool>verti;
            map<char,bool>hori;
            for(int j=0;j<9;j++){
                if(verti[board[j][i]]){
                    return false;
                }
                else if(board[j][i]!='.'){
                    verti[board[j][i]]=true;
                }
                if(hori[board[i][j]]){
                    return false;
                }
                else if(board[i][j]!='.'){
                    hori[board[i][j]]=true;
                }
        }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                map<char,bool>mp;
                for(int k=i*3;k<i*3+3;k++){
                    for(int l=j*3;l<j*3+3;l++){
                        if(mp[board[k][l]])
                         return false;
                        else if(board[k][l]!='.')
                         mp[board[k][l]]=true;
                    }
                }
            }
        }
        return true;
    }
};