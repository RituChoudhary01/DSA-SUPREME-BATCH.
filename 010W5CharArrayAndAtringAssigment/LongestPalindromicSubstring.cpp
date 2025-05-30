// Longest Palindromic Substring
//https://leetcode.com/problems/longest-palindromic-substring/description/
#include<iostream>
using namespace std; 

bool isPalindrome(string&s,int start,int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
            start++,end--;
    }
    return true;
}
string longestPalindromic(string s){
    string ans="";
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            if(isPalindrome(s,i,j)){
                string t = s.substr(i,j-i+1);
                ans = t.size()>ans.size()?t:ans;
            }
        }
    }
    return ans;
}
int main(){
    string str;
    getline(cin,str);
    cout<<longestPalindromic(str)<<endl;
}