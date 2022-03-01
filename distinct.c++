#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    int number;
    cin >> number;
    vector <int> numList;
    for(int i=0;i<number;i++){
        int val;
        cin >> val;
        numList.push_back(val);
    }
    sort(numList.begin(),numList.end());

    for(int i=0;i<number;i++){
        for(int j=i;j<number;j++){
            if (numList[i] == numList[j]){4
            
                cout << number << endl;
            }
        }
    }

}