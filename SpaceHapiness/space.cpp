#include <iostream>
using namespace std; 

int main(){
	int t; 
	long s; 
	cin >> t; 
	while(t--){
		cin >> s;
		if (s == 1) cout << "1" << endl;
		else if (s < 0) cout << "0" << endl; 
		else {
			long res = 0; 
			long aux = s;
			aux = aux - 2;
			while(aux >= 0){
				res = res + aux; 
				aux = aux - 2;
			}
			res = res * 2; 
			res = res + s;
			cout << res << endl; 
		} 
	}
	return 0; 
}