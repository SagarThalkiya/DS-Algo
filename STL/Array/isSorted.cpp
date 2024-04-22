#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int isSorted(int n, vector<int> a) {
    vector<int> b(a);   // created a copy of input vector 
    sort(b.begin(), b.end()); //sorted the new vector

    if(a == b){ //compared with input
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    // Example usage
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    
    if (isSorted(n, arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}

