class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p = 0;
        int check= 0;
        for(int t = 0;t<matrix.size();t++){
            if(matrix[t][matrix[t].size()-1]<target){
                p+=1;
            }
            else{
                check =1;
            }
        }

if(check ==0 ){
    return false;
}
        cout<<p<<endl;
        int low = 0;
        int high = matrix[0].size()-1;
        while(low<=high){
            cout<<low<<" "<<high<<endl;
            int mid = (low+high)/2;
            cout<<"mid - "<<matrix[p][mid]<<" "<<mid<<endl;
            if(matrix[p][mid]<target){
                cout<<"1"<<endl;
                low+=1;
            }
            else if(matrix[p][mid]>target){
                cout<<"2"<<endl;
                high-=1;
            }
            else{
                cout<<"hi"<<endl;
                return true;}
        }
        return false;
    }
};
