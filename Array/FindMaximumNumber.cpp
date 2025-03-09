
/*

Find maximum in an Array Given a list of N integers, representing height of mountains. Find the height of the tallest mountain.

Input:
First line will contain T, number of testcases. Then the testcases follow.
The first line in each testcase contains one integer, N.
The following line contains N space separated integers: the height of each mountains.

Output:
For each testcase, output one line with one integer: the height of the tallest mountain for that test case.

Sample 1:
Input
1
5
4 7 6 3 1

Output
7

*/

#include<iostream>
using namespace std;

int main() {
	// your code goes here
    
    int t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        
        int highest = 0;
        for(int j = 0; j < n; j++){
            int value;
            cin >> value;
            
            if(highest < value){
                highest = value;
            }
            
        }
        
        cout << highest << endl;
    }
    
    return 0;
}
