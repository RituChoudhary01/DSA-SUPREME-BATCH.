// Reorganize String
// https://leetcode.com/problems/reorganize-string/description/

#include<iostream>
#include<limits.h>
using namespace std;
string reorganizeString(string s){
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    // find the most frequent char
    char maxFreqChar;
    int maxFreq = INT_MIN;
    for(int i=0;i<26;i++){
        if(hash[i]>maxFreq){
            maxFreq = hash[i];
            maxFreqChar = i+'a';
        }
    }
    int index = 0;
    while(maxFreq>0 && index<s.size()){
        s[index]=maxFreqChar;
        maxFreq--;
        index+=2;
    }
    if(maxFreq != 0){
        return "";
    }
    hash[maxFreqChar-'a']=0;
    // let's place the rest of the characters.
    for(int i=0;i<26;i++){
        while(hash[i]>0){
            index = index >= s.size()?1:index;
            s[index]=i+'a';
            hash[i]--;
            index+=2;
        }
    }
    return s;
    }
    int main(){
        string s;
        getline(cin,s);
        cout<<reorganizeString(s)<<endl;
        return 0;
    }