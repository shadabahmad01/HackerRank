#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;
    
    set<int> s;
    
    for(int i=0;i<q;i++){
        int y, x;
        cin>>y>>x;
        if(y == 1){
            s.insert(x);
        }
        else if(y == 2){
            s.erase(x);
        }
        else{
            if(s.count(x) != 0){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}



