#include<bits/stdc++.h>
using namespace std;

int main(){
    // map<int,int> mp;    //This by default sorts the keys
    unordered_map<int,int> mp;    //For unordered map 
    mp[1] = 1;
    mp[0] = 5;
    mp[3] = 4;
    mp[2]=9;
    //interation

    //method 1
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //method 2
    for(int i=0; i<mp.size(); i++){
        cout<<mp[i]<<"\n";
    }



    string s = "Tanmay";
    unordered_map<char, int> sc;

    for(int i = 0; i<s.size(); i++){
        sc[s[i]]++;
    }

    for(auto i:sc){
        cout<<i.first<<" "<<i.second<<endl;
    }


    cout<<"Enter num,bner of students: ";
    int n;
    cin>>n;
    map<pair<int, string>, float> sm;
    sm[{1,"Tanmay"}] = 9.44;
    sm[{2, "Neha"}] = 9.6;
    sm[{3, "Suraj"}] = 9.8;
    // for(int i = 0; i<sm.size; i++){
    //     cout<<sm.
    // }

    for(auto i:sm){
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }



}