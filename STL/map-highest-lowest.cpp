#include<bits/stdc++.h>
using namespace std;

vector<int> frequntelement(vector<int> &v){
    int n = v.size();
    map<int,int> m;
    for(int i = 0; i < n; i++){
        m[v[i]]++;
    }
    vector<int> result;
    int maxi = 0;
    int minimum = INT_MAX;
  
    for(auto it : m) // Iterate over the map 'm'
    {
        maxi = max(maxi , it.second);
         // Compare frequencies
        minimum = min(minimum , it.second);
    }
    cout<<"highest freq is "<<maxi << endl;

    for(auto it : m) {
        if(it.second == maxi && it.first <= maxi) {
            result.push_back(it.first); // Store elements with maximum frequency
        }
        if(it.second == minimum ){
            result.push_back(it.first);
      }
    }

    return result;
}

int main(){
    int num;
    cout<<"enter size";
    cin >> num;
    vector<int> v(num, 0);
    for(int i = 0; i < num; i++) {
        cout << i << " element is -> ";
        cin >> v[i];
    }
    vector<int> max_freq_elements = frequntelement(v);
    
    cout << "Elements with maximum frequency: ";
    for(auto elem : max_freq_elements) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
