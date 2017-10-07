#include <iostream> 
using namespace std; 

int main(){
	int n, A, B;
	cin >> n; 
	while(n--){
		cin >> A >> B; 
		double x = 0;
		x = (B*10) / (B-A);
		cout << (int)x << endl; 
	}
	return 0;
}