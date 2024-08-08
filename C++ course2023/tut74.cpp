// ***********************     Function Objects (Functors) in C++ STL    **********************

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // Function Objects (Functor) :- Function wrapped in a class so that it available like an object
    
    int arr[] = {1, 74, 3, 2, 57, 7};
    // sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());       // Function Objects --> greater<int>()
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}