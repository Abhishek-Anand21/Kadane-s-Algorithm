#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin>>arr[i];
    int curr_sum = arr[0];
    int max_sum = arr[0];
    for (int i = 1; i < n; i++) {
        int sum = arr[i]+curr_sum;  
        if(sum > arr[i])           // check if sum is greater than the current element
         curr_sum = sum;
        else
         curr_sum = arr[i];        // if not , then take the current element as the current sum
        if(curr_sum > max_sum)
         max_sum = curr_sum;
    }
    cout<<max_sum<<endl;
}
