#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t{};
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        int n{};
        cin >> n;
        vector<int> array(n+1);
        for(int i = 1 ; i <= n ; i++)
        cin >> array[i];
        sort(array.begin(), array.end());
        vector<int> array2(n+1);
        array2.push_back(array[i]);
        for(int i = 2 ; i <= n ; i++){
            if(array[i+1] != array[i])
            array2.push_back(array[i]);
        }
    }
}