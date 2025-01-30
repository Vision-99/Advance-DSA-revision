#include <bits/stdc++.h> 
using namespace std; 


int count_pencil(int n){
	// x is the , how many times i can subtract the 3 from n, without 
	// making it zero, means leaving atleast 1 left
	// why?  
	// ans: you can only substract three when n>=4
	// 3 pencil can't be combined , so first we do n/3, an if n was 
	// maultile of 3 we subtract 1
	// int x = n/3;
	// if(n % 3 ==0) x--;	 // x=(n-1)/3 , short cut of that
	 int x=(n-1)/3;
	return (4 * x + 4 * n); 
} 


int main(){
 
	int n;
    cin>>n;
	cout << count_pencil(n) << endl; 
} 
