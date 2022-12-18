#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;   
    
    map<string, int> mp;
    
    for(int i=0;i<q;i++){
        int type;
        cin>>type;
        if(type == 1){
            string s; cin>>s;
            int y; cin>>y;
            if(mp.count(s) != 0){
                mp[s] += y;
            }
            else{
                mp[s] = y;
            }
        }
        else if(type == 2){
            string s; cin>>s;
            mp.erase(s);
        }
        else{
            string s; cin>>s;
            int score = mp[s];
            cout<<score<<"\n";
        }
    }
    return 0;
}



