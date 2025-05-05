#include <bits/stdc++.h> 
using namespace std; 


int count_pencil(int n){
	// x is the , how many times i can subtract the 2 from n, without 
	// making it zero, means leaving atleast 1 left
	// why?  
	// ans: you can only substract three when n>=3
	// 2 wrapper can't be combined , so first we do n/2, an if n was 
	// maultile of 2 we subtract 1
	// int x = n/2;
	// if(n % 2 ==0) x--;	// x=(n-1)/2 ,short cut of that
	
	int x= (n-1)/2;
	return x+n;; 
} 


int main(){
 
	int n;
    cin>>n;
	cout << count_pencil(n) << endl; 
} 
