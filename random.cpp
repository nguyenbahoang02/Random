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
                break;
            }
        }
        if (gay == 0){
            arr2[l] = arr[i];
            arr[i] = 0;
            l++; 
        }
    }
    for (int f = 0; f<l; f++){
        int temp;
        for (int g = 0; g<l; g++){
            if (arr2[g] > arr2[g+1]){
                temp = arr2[g];
                arr2[g] = arr2[g+1];
                arr2[g+1] = temp;
            }
        }
    }
    return 0;
}
