class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        for(int i=0;i<grid.size();i++){
            int j = 0;
            int k = i;
            vector<int>diag;
            while(k<grid.size()){
                diag.push_back(grid[k][j]);
                k++;
                j++;
            }
            sort(diag.begin(),diag.end());
            j=0;
            k=i;
            for(int s=diag.size()-1;s>=0;s--){
                grid[k++][j++]=diag[s];

            }
        }

         for(int i=1;i<grid[0].size();i++){
            int j = 0;
            int k = i;
            vector<int>diag;
            while(k<grid[0].size()){
                diag.push_back(grid[j][k]);
                k++;
                j++;
            }
            sort(diag.begin(),diag.end());
            j=0;
            k=i;
            for(int s=0;s<diag.size();s++){
                grid[j++][k++]=diag[s];

            }
        }


        return grid;
        
    }
};