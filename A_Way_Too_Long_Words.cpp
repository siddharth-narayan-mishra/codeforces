#include<iostream>
using namespace std;

void way_too_long_words(string &s){
    if(s.length()>10){
        s = s[0] + to_string(s.length()-2) + s[s.length()-1];
    }
    cout<<s<<endl;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        way_too_long_words(s);
    }
}