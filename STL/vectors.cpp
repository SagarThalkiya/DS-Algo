#include<bits/stdc++.h>
using namespace std;

void vector1(){
    vector<int> v; // declaration of vector

    v.push_back(1);
    v.emplace_back(2);

    for(auto it = v.begin(); it != v.end();it++){
             cout<<*(it)<<" ";
    }
    // this prints value at given address like for loop
        

}


int main(){
    vector1();
}