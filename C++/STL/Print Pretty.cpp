#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout<<hex<<showbase<<nouppercase<<left<<(long long)A<<endl;
        cout<<dec<<right<<setw(15)<<setfill('_')<<setprecision(2)<<showpos<<fixed<<B<<"\n";
        cout<<scientific<<uppercase<<noshowpos<<setprecision(9)<<C<<"\n";
	}
	return 0;

}