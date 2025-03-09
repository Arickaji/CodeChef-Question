/*

Search an element in an array

You are given an array A of size N and an element X. Your task is to find whether the array A contains the element X or not.

Input Format
The first line contains two space-separated integers N and 
X - the size of array and the element to be searched.
The second line contains all the elements of array A

Output Format
Output "YES" if the element X is present in A, otherwise output "NO"

Sample 1:
Input

5 3
7 3 5 2 1

Output
YES
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	int n , x;
    bool find = false;
	cin >> n >> x;
	
	for(int i = 0 ; i < n; i++){
	    int value;
	    cin >> value;
	    if(x==value){
	        find = true;
	        break;
	    }
	}
	
	if(find){
	    cout << "YES" << endl;
	} else{
	    cout << "NO" << endl;
	}
	
    return 0;
}
