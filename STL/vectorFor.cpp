#include <bits/stdc++.h>
using namespace std;



void vec()
{
    vector<int> a = {1, 2, 3, 4, 5};

    for (auto it : a)
    { // this prints all the elements from  vector
        cout << it << " ";
    }
    cout << endl;
    a.erase(a.begin() + 1);
    for (auto it : a)
    { // this prints all the elements from  vector
        cout << it << " ";
    }
}

void vec1()
{
    vector<int> v(3, 100);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    v.insert(v.begin(), 300); // it will insert 300 at initial location
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    v.insert(v.begin() + 1, 2, 40); // this insert 40 two time in given vector
    for (auto it : v)
    {
        cout << it << " ";
    }
}

void vec3()
{
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    for (auto it : v1)
    {
        cout << it;
    }
    cout << endl;
    for (auto it : v2)
    {
        cout << it;
    }
    cout << endl;

    v1.swap(v2);
    cout << "this is v1 after swap :";
    for (auto it : v1)
    {
        cout << it;
    }
    cout << endl;
    cout << "this is v2 after swap :";
    for (auto it :v2)
    {
        cout << it;
    }
    cout << endl;
    cout<< v1.size();//it returns the size of vector
}

int main()
{
    // vec();
    //vec1();
    vec3();
}
