#include<iostream>
#include<vector>
using namespace std;

vector<int> printVec(vector<int>& v){
    cout<<"printing vector:";
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl<<"printing done.";
    
}

vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> v;

    for (int i = 0; i < nums.size(); i++)
    {
            for (int j = i+1; j < nums.size(); j++)
            {
                int addition = nums[i]+nums[j];
                    cout<<nums[i]<<" "<<nums[j]<<" "<<addition<<endl;
                if(addition == target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
            
    }
    return v;
}

int main(){

    vector<int> v = {-1,-2,-3,-4,-5};

    vector<int> result = twoSum(v,-8);

    printVec(result);
    
    return 0;
}