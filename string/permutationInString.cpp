#include<iostream>
using namespace std;

bool checkInclusion(string s1, string s2) {
    int chars[26] = {0};
    for (int i = 0; i < s2.length(); i++)
    {
        cout<<s2[i]<<endl;
    }
    return true;
    
}

int main(){

    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << "resutl: " << checkInclusion(s1,s2);
    
    return 0;
}