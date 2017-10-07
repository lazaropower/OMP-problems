#include <stdio.h>
#include <stdlib.h>

int isPrime(int num){
	if (num == 1) 
		return 0; //true			
	else if (num == 2) 
		return 0; //true;
	else {
		int i;
		for (i = 2; i < num; i++)
		{
			if (num % i == 0) 
				return 1;
		}
	}
	return 0; 
}

int isPalindrome(int num) {
	int reverse = 0; 
	int temp = num; 
	while(temp != 0) {
		reverse *= 10; 
		reverse += (temp%10); 
		temp /= 10; 
	}
	if (num == reverse) 
		return 0; //palindrome
	else return 1; 
}

int main(void) {
	int n;
	scanf("%d", &n); 
	while (1) {
		printf("%d\n", n*2); 
		if ((isPalindrome(n) == 0) && (isPrime(n) == 0))
			exit (0); 
		scanf("%d", &n); 
	}
	return 0;
}