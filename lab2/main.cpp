#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i=0; i<n; i++){
        cin>>vec[i];
    }
    for (auto el:vec){
        cout<<el<<" ";
    }
    int maxim=vec[0];
    for (auto el:vec){
        if (el>maxim){
            maxim=el;
        }
    }
    cout<<maxim<<endl;
    return 0;
}
