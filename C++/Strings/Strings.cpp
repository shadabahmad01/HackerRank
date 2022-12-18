#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1, s2;
    cin>>s1>>s2;
    
    cout<<s1.length()<<" "<<s2.length()<<"\n";
    cout<<(s1+s2)<<"\n";
    
    char tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;
    cout<<s1<<" "<<s2;
    return 0;
}