#include <bits/stdc++.h> 
using namespace std; 


int count(int n){

	int x = n/3;
	if(n % 3 ==0) x--;	
	 
	return (4 * x + 4 * n); 
} 


int main(){
 
	int n;
    cin>>n;
	cout << count(n) << endl; 
} 
