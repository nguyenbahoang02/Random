#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, l = 0, dem = 0;
    cin >> n;
    int arr[n], arr2[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
        int gay = 0;
        for (int k = 2; k< arr[i]/2; k++){
            if (arr[i] % k == 0){
                gay++;
                arr[i] = 0;
                break;
            }
        }
        if (gay == 0){
            arr2[l] = arr[i];
            l++; 
        }
    }
    int a = sizeof(arr2)/sizeof(arr2[0]);
    sort(arr2, arr2 + a);
    for (int v = 0; v < n; v++){
        if (arr[v] == 0){
            cout << arr2[dem] << " ";
            dem++;
        }
        else cout << arr[v] << " ";
    }
    return 0;
}
