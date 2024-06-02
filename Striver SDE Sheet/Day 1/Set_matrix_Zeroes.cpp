//Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.You must do it in place.

//https://leetcode.com/problems/set-matrix-zeroes/solutions/3172908/best-c-4-solution-hash-table-matrix-brute-force-optimize-one-stop-solution/

//Used matrix method TC - O(N^2) and SC is O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows;
        unordered_set<int> setColumns;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(setRows.count(i)>0 || setColumns.count(j)>0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};