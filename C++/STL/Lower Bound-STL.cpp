#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cin>>q;
    vector<int>::iterator id;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        if(binary_search(arr.begin(), arr.end(), x)){
            id = lower_bound(arr.begin(), arr.end(), x);
            cout<<"Yes "<<(id-arr.begin()+1)<<"\n";
        }
        else{
            id = upper_bound(arr.begin(), arr.end(), x);
            cout<<"No "<<(id-arr.begin()+1)<<"\n";
        }
    }
    return 0;
}
