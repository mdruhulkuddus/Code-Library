#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int n, numCores, limit, ans = 0;
    cin >> n; long long int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> numCores >> limit;
    for(int i = 0; i < n; i++){
        if(arr[i] < numCores){
            ans += arr[i];
        }
        else{
            if(arr[i]%numCores == 0){
                ans += arr[i]/numCores;
            }
            else{
                ans += arr[i];
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
