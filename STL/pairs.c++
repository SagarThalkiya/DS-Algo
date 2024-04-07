//pairs are in stl library which give us ustility to access element in  pairs


#include<bits/stdc++.h>
using namespace std;


void pairs(){
    pair <int , int> p = {1,3};
    cout<< p.first <<" "<< p.second;
}

void pairs1(){
    pair<int , pair<int ,int>> p = {1 ,{2,3}};
    cout<< p.first <<" "<< p.second.second<<" "<< p.second.first;
}

//we can also use array of pairs
void ArrayPair(){
    pair<int ,int > arr[] = { {1,2},{2,3},{3,4}};
    cout << arr[2].first;
}

int main(){
   ArrayPair();
}
