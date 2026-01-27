#include<iostream>
#include<vector>
using namespace std;
vector<int> submatrixprefixsum(vector<vector<int>> &matrix,vector<vector<int>> &queries,vector<int> &result){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> prefix(row,vector<int>(col,0));
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            prefix[i][j] = matrix[i][j];
            
            if(i>0){
                prefix[i][j]+=prefix[i-1][j];
            }
            
            if(j>0){
                prefix[i][j]+=prefix[i][j-1];
            }
            
            if(i>0 && j>0){
                prefix[i][j]-=prefix[i-1][j-1];
            }
        }
    }
    
    for(auto &q:queries){
        int r1 = q[0];
        int c1 = q[1];
        int r2 = q[2];
        int c2 = q[3];
        
        int total = prefix[r2][c2];
        int top = (r1>0) ? prefix[r1-1][c2] : 0;
        int left = (c1>0) ? prefix[r2][c1-1] : 0;
        
        int overlap = (r1>0 && c1>0) ? prefix[r1-1][c1-1] : 0;
        
        total = total-top-left+overlap;
        result.push_back(total);
    }
    return result;
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    
    vector<vector<int>> queries = {{1,1,2,2},{1,2,3,3}};
    
    vector<int> result = {};
    result = submatrixprefixsum(arr,queries,result);
    for(auto i:result){
        cout<<i<<" ";
    }
    }
