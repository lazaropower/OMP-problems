#include <iostream>
using namespace std; 

int main(void) {
	int n, x, y, i;
	cin >> n;
    while(n--) {
		cin >> x >> y; 
		cout << (x/3)*(y/3) << endl; 
	}
	return 0; 
}	
