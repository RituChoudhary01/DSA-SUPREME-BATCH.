// Palindrome Check RE
#include<iostream>
using namespace std;
bool isPalindrome(string &s,int start,int end){
    // base case
    if(start >= end){
        return true;
    }
    // one case slove krna h
    if(s[start]!=s[end])
       return false;
    // RE 
    return isPalindrome(s,start+1,end-1);   
}
int main(){
    string s;
    cin>>s;
    cout<<isPalindrome(s,0,s.size()-1);
    return 0;
}
