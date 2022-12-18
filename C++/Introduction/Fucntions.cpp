#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c,int d){
    int mx = max(a,max(b,max(c,d)));
    return mx;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int res = max_of_four(a, b, c, d);
    cout<<res;
    return 0;
}