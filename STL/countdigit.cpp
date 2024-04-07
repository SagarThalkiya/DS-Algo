#include<bits/stdc++.h>
using namespace std;

int main(){
    int k = 0;
    int n = 35;
    while(n>0){
        n = n%10;
        cout << n << endl;
        k++;
        n = n/10;
    }
    k = k+1;
    cout<< k;
    
    int j =0;
	int p;
	while(--k){
		
		p = n%10;
		if(n%p==0 && p != 0){
			j = j+1;
		}
		p = p/10;
		
	}
    cout<< j;


   
}