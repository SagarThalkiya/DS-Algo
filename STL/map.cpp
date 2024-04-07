#include<bits/stdc++.h>
using namespace std;

void mkp(){
    map<int ,int> mpp;

    mpp[1]=2; // it stores as {1,2} where 1 is key and 2 is its value
    mpp.insert({2,3});
  
    for(auto it : mpp){
        cout << it.first <<" "<< it.second<< endl;
    }

    cout<< mpp[1]; //return value at key 1;

}


int main(){
        mkp();
}